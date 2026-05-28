#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string password;

    cout << "Enter your password: ";
    cin >> password;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    int score = 0;

    // Check each character
    for (char ch : password) {

        if (isupper(ch))
            hasUpper = true;

        else if (islower(ch))
            hasLower = true;

        else if (isdigit(ch))
            hasDigit = true;

        else
            hasSpecial = true;
    }

    // Length Check
    if (password.length() >= 8) {
        score++;
    } else {
        cout << "❌ Password should be at least 8 characters long\n";
    }

    // Uppercase Check
    if (hasUpper) {
        score++;
    } else {
        cout << "❌ Add at least one uppercase letter\n";
    }

    // Lowercase Check
    if (hasLower) {
        score++;
    } else {
        cout << "❌ Add at least one lowercase letter\n";
    }

    // Number Check
    if (hasDigit) {
        score++;
    } else {
        cout << "❌ Add at least one number\n";
    }

    // Special Character Check
    if (hasSpecial) {
        score++;
    } else {
        cout << "❌ Add at least one special character\n";
    }

    // Result
    cout << "\nPassword Strength: ";

    if (score == 5) {
        cout << "✅ Strong Password";
    }
    else if (score >= 3) {
        cout << "⚠️ Medium Password";
    }
    else {
        cout << "❌ Weak Password";
    }

    return 0;
}
