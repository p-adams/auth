#include <iostream>

int main(int argc, char const *argv[])
{
    auto option = 0;
    while (option != 3)
    {
        std::cout << "1:    LOGIN 2:    REGISTER 3: QUIT" << std::endl;
        std::cin >> option;
        if (option == 1)
        {
            std::cout << "LOGIN" << std::endl;
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
