#include <iostream>
#include <iomanip>
using namespace std;

int getStartDay(int year, int month);
bool isLeap(int year);
int getDaysInMonth(int month, int year);

void printCalendar(int month, int year) {
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

    cout << "\n\n📅 " << months[month - 1] << " " << year << "\n";
    cout << "-----------------------------\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    int startDay = getStartDay(year, month);
    int days = getDaysInMonth(month, year);

    for (int i = 0; i < startDay; i++)
        cout << "    ";

    for (int i = 1; i <= days; i++) {
        cout << setw(3) << i << " ";
        if ((i + startDay) % 7 == 0)
            cout << endl;
    }
    cout << endl;
}

int getStartDay(int year, int month) {
    int d = 1, m = month, y = year;
    if (m < 3) {
        m += 12;
        y--;
    }
    int k = y % 100;
    int j = y / 100;
    int day = (d + 13*(m+1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return (day + 6) % 7; // Adjusting to make Sunday = 0
}

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2 && isLeap(year))
        return 29;
    return daysInMonth[month - 1];
}

int main() {
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    printCalendar(month, year);
    return 0;
}
