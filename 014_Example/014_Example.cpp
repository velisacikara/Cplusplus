
#include <iostream>
using namespace std;

class Nokta {
private:
    int x;
    int y;
public:
    int* z;
    Nokta(int, int); // constructor
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    void print();
    ~Nokta();       // destructor
};

Nokta::Nokta(int x = 0, int y = 0)
{
    this->x = x;
    this->y = y;
    z = new int(6);
}

void Nokta::setX(int x) { this->x = x; }

void Nokta::setY(int y) { this->y = y; }

int Nokta::getX() { return x; }

int Nokta::getY() { return y; }

void Nokta::print()
{
    cout << "(x,y): (" << x << "," << y << ") " << endl;
}

Nokta::~Nokta()
{
    cout << "detsructor calisti ";
    cout << "(x,y): (" << x << "," << y << ") " << endl;
    delete z;
}


int main()
{
    Nokta n1(3, 8);
    n1.print();
    n1.setX(2);
    n1.setY(4);
    cout << "x: " << n1.getX() << endl;
    cout << "y: " << n1.getY() << endl;
    n1.print();

    cout << endl;

    Nokta n2;
    n2.print();
    n2.setX(5);
    n2.setY(5);
    cout << "x: " << n2.getX() << endl;
    cout << "y: " << n2.getY() << endl;
    n2.print();
    cout << endl;


    Nokta nokta_dizisi[5] = { {1,2}, {3,4}, {5,5} };
    for (int i = 0; i < 5; i++)
    {
        nokta_dizisi[i].print();
    }
    cout << endl;

    Nokta* nptr = new Nokta(4, 4);
    nptr->print();
    nptr->setX(3);
    nptr->setY(3);
    cout << "nptr(x,y): " << nptr->getX() << "," << nptr->getY() << endl;
    nptr->print();

    cout << endl;




    return 0;
}