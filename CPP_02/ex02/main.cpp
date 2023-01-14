#include "Fixed.hpp"

int main()
{
    Fixed const a(3.46f);
    Fixed const b(4.31f);
    Fixed c;
    //binary operators
    c = a+b;
    std::cout << "The Result of  + : "<< c << std::endl;
    c = a-b;
    std::cout << "The Result of  - : "<< c << std::endl;
    c = a*b;
    std::cout << "The Result of  * : "<< c << std::endl;
    c = a/b;
    std::cout << "The Result of  / : "<< c << std::endl;
    //comparison operators
    bool status = a > b;
    std::cout << "The Result of  > : "<< status << std::endl;
    status = a < b;
    std::cout << "The Result of  < : "<< status << std::endl;
    status = a >= b;
    std::cout << "The Result of  >= : "<< status << std::endl;
    status = a <= b;
    std::cout << "The Result of  <= : "<< status << std::endl;
    status = a == b;
    std::cout << "The Result of  == : "<< status << std::endl;
    status = a != b;
    std::cout << "The Result of  != : "<< status << std::endl;
    //increment/decrement
    Fixed e(1);
    std::cout << "the e is : " << e << std::endl;
    std::cout << "the increment e is : " << ++e<< std::endl;
    std::cout << "the increment e is : " << e++<< std::endl;
    std::cout << "the e is : " << e<< std::endl;
    std::cout << "the d'increment e is : " << --e<< std::endl;
    std::cout << "the d'increment e is : " << e--<< std::endl;
    std::cout << "the e is : " << e<< std::endl;

}