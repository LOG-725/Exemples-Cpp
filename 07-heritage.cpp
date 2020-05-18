#include <iostream>

using namespace std;

struct Forme 
{
    virtual void Draw() = 0; // pure virtual func.
};

struct Cercle : public Forme 
{
    virtual void Draw() { cout << "je suis un cercle" << endl; }
};

struct Rectangle : public Forme
{
    virtual void Draw() { cout << "je suis un rectangle" << endl; }
}

int main()
{
    Forme * f1 = new Cercle;
    Forme * f2 = new Rectangle;
    // Forme * f3 = new Forme;
    f1->Draw();
    f2->Draw();
    delete f1;
    delete f2;
}