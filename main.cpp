#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    int option = 0;
    while (option != 3)
    {
        std::cout << "1:LOGIN   2:REGISTER  3:QUIT" << std::endl;
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

            std::string line;
            std::ifstream file("../creds.txt");
            bool loginFailed = false;
            while (std::getline(file, line))
            {
                if (line.find(username, 0) == std::string::npos && line.find(password, 0) == std::string::npos)
                {
                    std::cout << "INCORRECT USERNAME OR PASSWORD" << std::endl;
                    loginFailed = true;
                    break;
                }
            }
            if (!loginFailed)
            {
                std::cout << "LOGIN SUCCESSFUL" << std::endl;
            }

            break;
        }
        else if (option == 2)
        {
            std::string username;
            std::cout << "USERNAME: ";

            std::cin.ignore();
            std::getline(std::cin, username);

            std::string password;
            std::cout << "PASSWORD: ";

            std::getline(std::cin, password);

            std::ofstream file("../creds.txt");
            file << username + "\n" + password;
            file.close();

            break;
        }
        else
        {
            std::cout << "Good-bye!" << std::endl;
        }
    }
    return 0;
}
