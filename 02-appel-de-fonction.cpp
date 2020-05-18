#include <iostream>

int ma_fonction( int var, int & ref, int * ptr )
{
    var += 1;
    *ptr += 1;
    ref += 1;
    return var;
}

int main()
{
    int x = 10;
    int y = 10;
    int & y_ref = y;
    int * y_ptr = &y;
    
    int z = ma_fonction( x, y_ref, y_ptr );
    
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}