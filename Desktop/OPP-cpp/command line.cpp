#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

const std::string FILE_NAME = "passwords.dat";
const char XOR_KEY = 0xAA;  // Simple XOR key for encryption

std::string xorEncryptDecrypt(const std::string& input) {
    std::string output = input;
    for (char& ch : output) {
        ch ^= XOR_KEY;
    }
    return output;
}

void savePassword(const std::string& service, const std::string& password) {
    std::ofstream file(FILE_NAME, std::ios::app);
    if (file.is_open()) {
        file << xorEncryptDecrypt(service) << " " << xorEncryptDecrypt(password) << "\n";
        file.close();
        std::cout << "Password saved!\n";
    } else {
        std::cerr << "Error opening file for writing.\n";
    }
}

void getPassword(const std::string& service) {
    std::ifstream file(FILE_NAME);
    if (file.is_open()) {
        std::string encryptedService, encryptedPassword;
        bool found = false;
        while (file >> encryptedService >> encryptedPassword) {
            if (xorEncryptDecrypt(encryptedService) == service) {
                std::cout << "Password for " << service << ": " << xorEncryptDecrypt(encryptedPassword) << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "Service not found.\n";
        }
        file.close();
    } else {
        std::cerr << "Error opening file for reading.\n";
    }
}

int main() {
    int choice;
    std::string service, password;

    do {
        std::cout << "\nPassword Manager\n";
        std::cout << "1. Save password\n";
        std::cout << "2. Get password\n";
        std::cout << "3. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                std::cout << "Enter service name: ";
                std::getline(std::cin, service);
                std::cout << "Enter password: ";
                std::getline(std::cin, password);
                savePassword(service, password);
                break;
            case 2:
                std::cout << "Enter service name to retrieve password: ";
                std::getline(std::cin, service);
                getPassword(service);
                break;
            case 3:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    return 0;
}
