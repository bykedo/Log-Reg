#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    const string NEW_LINE = "\n";

    int numberMenu;

    string loginPassword;

    string username, password;
    string menu[2] = {"Вход в аккаунт", "Регистрация"};
    cout << "Система входа и регистрации" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << i + 1 << ". " << menu[i] << endl;
    }

    cout << "Выберите действие из представленного списка выше: ";
    cin >> numberMenu;

    if (numberMenu == 1)
    {
        cout << "Вход в аккаунт" << endl;

        cout << "Введите пароль для входа в аккаунт: ";
        cin >> loginPassword;

        if (loginPassword == "123123")
        {
            cout << "Вход в аккаунт прошел успешно!" << endl;
        }
        else
        {
            cout << "ОШИБКА: Пароль введен неправильно, повторите попытку..." << endl;
        }
    }
    else if (numberMenu == 2)
    {
        cout << "Регистрация" << endl;
        cout << "Введите имя для вашего аккаунта: ";
        cin >> username;
        cout << "Введите пароль для аккаунта: ";
        cin >> password;

        ofstream userFile("user.txt");
        if (userFile.is_open())
        {
            userFile << username << NEW_LINE << password << endl;
            userFile.close();
            cout << "Регистрация аккаунта прошла успешно!" << endl;
        }
        else
        {
            cout << "ОШИБКА: Не удалось создать файл для сохранения учетных данных." << endl;
        }
    }
    else
    {
        cout << "ОШИБКА: Данного пункта нет в списке программы...";
    }

    return 0;
}
