#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool IsLoggedIn()
{

    string username, password, un, pw;
    cout << "Enter username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    ifstream read(username + ".txt");
    getline(read, un);
    getline(read, pw);
    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    cout << "1.Registration" << endl
         << "2.Login" << endl
         << "Enter your choice:" << endl;
    cin >> choice;
    if (choice == 1)
    {
        string username, password;
        cout << "Select a username" << endl;
        cin >> username;
        cout << "Password" << endl;
        cin >> password;
        ofstream file;
        file.open(username + ".txt");
        file << username << endl
             << password;
        file.close();
        main();
    }
    else if (choice == 2)
    {
        bool status = IsLoggedIn();
        if (!status)
        {
            cout << "False Login Attempt" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout << "Successful Login!" << endl;
            system("PAUSE");
            return 1;
        }
    }
}