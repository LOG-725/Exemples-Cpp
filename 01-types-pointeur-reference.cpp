#include <iostream>

int main()
{
    int x = 10;
    
    int & x_ref = x;
    std::cout << x_ref << std::endl;
    
    int * x_ptr = &x;
    std::cout << x_ptr << std::endl;
    std::cout << *x_ptr << std::endl;
}
