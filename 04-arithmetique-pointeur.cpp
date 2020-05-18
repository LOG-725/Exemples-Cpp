#include <iostream>

int main()
{
    int tableau[5] = { 0, 1, 2, 3, 4 };
    int * tab_ptr = &tableau[0];
    int * tab_ptr2 = tab_ptr + 2;
    int * tab_ptr3 = tab_ptr2;
    tab_ptr3++;
    std::cout << *tab_ptr << " " << *tab_ptr2 << " " << *tab_ptr3 << std::endl;
}