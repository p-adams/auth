#include <iostream>

int main(int argc, char const *argv[])
{

    int option = 0;
    while (option != 3)
    {
        std::cout << "1:    LOGIN 2:    REGISTER 3: QUIT" << std::endl;
        std::cin >> option;
        if (option == 1)
        {

            std::string username;
            std::string password;
            std::cout << "USERNAME: ";

            std::cin.ignore();

            std::getline(std::cin, username);
            std::cout << "PASSWORD: ";
            std::getline(std::cin, password);

            // TODO: if auth file and user exists in auth file
            std::cout << "LOGIN: " << username << " : " << password << std::endl;
            break;
        }
        else if (option == 2)
        {
            std::cout << "REGISTER" << std::endl;
        }
        else
        {

            std::cout << "Good-bye!" << std::endl;
        }
    }
    return 0;
}
