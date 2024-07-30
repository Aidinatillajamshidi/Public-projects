#include <iostream>
#include <string>

#include "calculatorfunctions.h"

//--------------------------------------------------------------------------------------------------------------------------------------------//
/* TO-DO */
    // Kolla hur main ska fungera

//--------------------------------------------------------------------------------------------------------------------------------------------//

int main()
{
    int choice{};
    bool active{true};
    Cfunctions cf{};

    std::cout << "\n-- C++ Calculator --" << std::endl;
    cf.printfunctions();

    while(active)
    {
        std::cout << "Enter function number: ";
        std::cin >> choice;

        switch(choice)
        {
            case 0: /* Print functions */
            {
                cf.printfunctions();
                break;
            }

            case 1: /* Exit */
            {
                cf.exit(active);
                break;
            }

            case 2: /* Addition */
            {
                /* code */
                break;
            }

            case 3: /* Subtraction */
            {
                /* code */
                break;
            }

            case 4: /* Multiplication */
            {
                /* code */
                break;
            }

            case 5: /* nFakultet! ÄNDRA  */
            {
                /* code */
                break;
            }

            default:
            {
                /* Skriva något med invalid value här */
            }
        }
    }
    
    return 0;
}