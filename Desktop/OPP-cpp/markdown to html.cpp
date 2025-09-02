#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <vector>

using namespace std;

string convertMarkdownLine(const string& line) {
    string result = line;

    // Headings
    if (regex_match(result, regex("^#{1,6} .*"))) {
        size_t level = result.find(' ');
        string content = result.substr(level + 1);
        return "<h" + to_string(level) + ">" + content + "</h" + to_string(level) + ">";
    }

    // Unordered list
    if (regex_match(result, regex("^[-*] .*"))) {
        return "<li>" + result.substr(2) + "</li>";
    }

    // Inline formatting: bold and italic
    result = regex_replace(result, regex("\\*\\*(.*?)\\*\\*"), "<strong>$1</strong>");
    result = regex_replace(result, regex("_(.*?)_"), "<em>$1</em>");

    return "<p>" + result + "</p>";
}

void convertMarkdownFile(const string& inputFile, const string& outputFile) {
    ifstream in(inputFile);
    ofstream out(outputFile);

    if (!in || !out) {
        cerr << "Error opening input/output file.\n";
        return;
    }

    string line;
    bool inList = false;

    while (getline(in, line)) {
        if (line.empty()) {
            if (inList) {
                out << "</ul>\n";
                inList = false;
            }
            out << "\n";
            continue;
        }

        if ((line[0] == '-' || line[0] == '*') && line[1] == ' ') {
            if (!inList) {
                out << "<ul>\n";
                inList = true;
            }
            out << convertMarkdownLine(line) << "\n";
        } else {
            if (inList) {
                out << "</ul>\n";
                inList = false;
            }
            out << convertMarkdownLine(line) << "\n";
        }
    }

    if (inList) {
        out << "</ul>\n";
    }

    cout << "Conversion completed. Output written to " << outputFile << "\n";
}

int main() {
    string input = "sample.md";
    string output = "output.html";

    convertMarkdownFile(input, output);
    return 0;
}
