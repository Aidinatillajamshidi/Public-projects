#include "calculatorfunctions.h"

Cfunctions::Cfunctions() /* glöm inte : här */
    {
    }

/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
void Cfunctions::exit(bool & active) /* case 1 */
{
    std::cout << "Exiting calculator!\n" << std::endl;
    active = false;
}

void Cfunctions::printfunctions() const /* case 0 */
{
    std::cout << "\n-- Listing functions! --" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Print functions   => 0" << std::endl;
    std::cout << "Exit Calculator   => 1" << std::endl;
    std::cout << "Addition          => 2" << std::endl;
    std::cout << "Subtraction       => 3" << std::endl;
    std::cout << "Multiplication    => 4" << std::endl;
    std::cout << "------------------------------------------\n" << std::endl;
}
/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/