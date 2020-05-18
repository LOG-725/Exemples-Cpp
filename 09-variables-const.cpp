#include <iostream>

// exemple 1: modifier une variable constante
void VarConstante()
{
    const int t = 10;
    t++;
}

// exemple 2 : incrémenter le contenu constant d'un pointeur
void ContenuConstantPtr() 
{
    int t = 10;
    const int * t_ptr = &t;
    (*t_ptr)++;
}

// exemple 3 : incrémenter le contenu d'un pointeur constant
void ContenuPtrConstant()
{
    int t = 10;
    int * const t_ptr = &t;
    (*t_ptr)++;
}

int main( int arcg, char ** argv )
{
    // laquelle de ces trois fonctions compile?
    VarConstante();
    ContenuConstantPtr();
    ContenuPtrConstant();
}