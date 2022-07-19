#include <iostream>
#include <fstream>
#include <vector>

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

            std::vector<std::string> creds;

            while (std::getline(file, line))
            {
                creds.push_back(line);
            }

            std::string usr = creds.at(0);
            std::string pass = creds.at(1);

            if (usr != username || pass != password)
            {
                std::cout << "INCORRECT USERNAME OR PASSWORD" << std::endl;
                break;
            }

            std::cout << "LOGIN SUCCESSFUL" << std::endl;

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
            option = 3;
        }
    }
    return 0;
}
