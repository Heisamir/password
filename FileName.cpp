#include <iostream>
#include <string>
#include <cctype> // برای توابع isdigit، islower، isupper

using namespace std;

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    int length = password.length();
    int score = 0;

    bool hasDigit = false;
    bool hasSpecialChar = false;
    bool hasUpperCase = false;
    bool hasLowerCase = false;

    for (char ch : password) {
        if (isdigit(ch)) {
            hasDigit = true;
        }
        else if (isupper(ch)) {
            hasUpperCase = true;
        }
        else if (islower(ch)) {
            hasLowerCase = true;
        }
        else {
            hasSpecialChar = true;
        }
    }

    if (hasDigit) {
        score += 20;
    }
    if (hasSpecialChar) {
        score += 20;
    }
    if (hasUpperCase) {
        score += 20;
    }
    if (hasLowerCase) {
        score += 20;
    }
    if (length > 6) {
        score += 20;
    }

    // اگر طول کمتر از 6 کاراکتر باشد، رمز عبور نامعتبر است
    if (length < 6) {
        cout << "Password is too short! It must be at least 6 characters." << endl;
    }
    else {
        cout << "Password strength: " << score << "%" << endl;
    }

    return 0;
}
