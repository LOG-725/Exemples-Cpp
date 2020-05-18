#include <iostream>

class Foo
{
public:
    Foo() : m_x(0) {}
    ~Foo() {}
    void faire_qqch() { std::cout << m_x << std::endl; }
protected:
    int m_x;
};

int main( int arcg, char ** argv )
{
    Foo f;
    f.faire_qqch();

    Foo & f_ref = f;
    f_ref.faire_qqch();

    Foo * f_ptr = &f;
    f_ptr->faire_qqch();  // équivalent à (*f_ptr).faire_qqch()
}
