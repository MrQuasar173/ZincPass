#include "rsa.h"
#include <iostream>
#include <string>

int main()
{
    bool done = false;
    while (done == false)
    {
        char menu;
        std::cout << "Welcome to PassMan" << std::endl;
        std::cout << "[A] Sign in to an existing account" << std::endl << "[N] Create a new account" << std::endl << "[X] Remove or change an account" << std::endl << "[Q] Exit PassMan" << std::endl << "> ";

        std::cin >> menu;

        switch(menu)
        {
            case 'A':
            case 'a':
                
                std::string Username;
                std::cout << "Account username>> ";
                std::cin >> Username;
            
            
                    
        }
    } 
    return 0;
}               