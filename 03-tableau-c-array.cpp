#include <iostream>

int main()
{
    int x[3] = {1,2,3};

    for( int i = 0; i < 3; ++i )  // pourquoi pas i < x.size() ?
    {
        std::cout << x[i] << std::endl;
    }
    
    // Qu'est-ce qui arrive ici ?
    x[3] = 2;
}
