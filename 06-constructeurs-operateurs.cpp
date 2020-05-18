#include <iostream>

using namespace std;

class Foo
{
public:

    Foo() : m_x(0) { cout << "constructeur par defaut" << endl; }
    Foo(int x) : m_x(x) { cout << "constructeur avec initialisation" << endl; }
    ~Foo() { cout << "destructeur" << endl; }
    Foo( const Foo & other ) { m_x = other.m_x; cout << "constructeur de copie" << endl; }
    Foo & operator=( const Foo & other ) { m_x = other.m_x + 1; cout << "operateur =" << endl; }

protected:

    int m_x;
};

int main( int arcg, char ** argv )
{
    Foo f;
    Foo f2( 3 );
    Foo f3( f2 );
    Foo f4 = f3;
    f4 = f3;
}

