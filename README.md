# Login and Registration System

This is a simple console-based login and registration system implemented in C++. The program provides two options: logging into an existing account or registering a new one. User credentials are stored in a text file ("user.txt").

## Code Overview

The C++ code utilizes basic input/output and file handling functions. Here's a brief overview:

```cpp
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main() {
    // Set Russian locale for proper character handling
    setlocale(LC_ALL, "ru");

    // Constants and variables
    const string NEW_LINE = "\n";
    int numberMenu;
    string loginPassword, username, password;
    string menu[2] = {"Вход в аккаунт", "Регистрация"};

    // Display menu options
    cout << "Система входа и регистрации" << endl;
    for (int i = 0; i < 2; i++) {
        cout << i + 1 << ". " << menu[i] << endl;
    }

    // User selection
    cout << "Выберите действие из представленного списка выше: ";
    cin >> numberMenu;

    // Login
    if (numberMenu == 1) {
        // Code for logging into an account
    }
    // Registration
    else if (numberMenu == 2) {
        // Code for user registration
    }
    // Invalid menu option
    else {
        cout << "ОШИБКА: Данного пункта нет в списке программы...";
    }

    return 0;
}
```

## Usage

1. Compile the code using a C++ compiler.
2. Run the executable.
3. Choose between logging in or registering a new account.
4. Follow the on-screen instructions.

## Notes

- The user credentials are stored in a text file named "user.txt."
- For demonstration purposes, a simple password ("123123") is hardcoded for login. Update it as needed for a real application.
- The program provides basic error handling for file operations.

Feel free to modify and enhance the code according to your needs.
