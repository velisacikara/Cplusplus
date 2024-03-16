

#include <iostream>

using namespace std;

// class içindeki function overloading 


class Myclass
{
	int a, b, c;
public:
	int mx, my;
	void foo(int);
	void foo(double);
};

void Myclass::foo(int x)
{
	cout << "foo(int) cagrildi\n";
}
void Myclass::foo(double x)
{
	cout << "foo(double) cagrildi\n";
}

// Önemli!!!
// class içindeki tüm fonksiyonlarýn aslýnda bir gizli parametresi vardýr. 
// Bu parametre bulunduklarý classýn bir pointer'ýdýr.
// Fonksiyonlar bu pointer sayesinde mx, my gibi deðiþkenler üzerinde iþlem yapabilir.


// Örnek 
class newclass
{
public:
	int mx, my;
	void foo(int, int);
	void display()const; 
	// display fonksiyonu sonundaki const, deðiþkenler üzerinde bir iþlem yapýlmayacaðýný, sadece okuma yapýlacaðýný belirtir.
	// getter bir fonksiyon olduðunu belirtir.
	// const olan bir fonksiyonda class içerisinde bulunan const olmayan bir fonksiyon çaðrýlamaz.
};

void newclass::foo(int x, int y)
{
	mx = x;
	my = y;
}

void newclass::display()const
{
	cout << mx << "\n";
	cout << my << "\n\n";
}




int main()
{
	Myclass myobject;
	myobject.foo(12);
	myobject.foo(4.3);


	newclass newobj1;
	newclass newobj2;

	newobj1.foo(1, 2);
	newobj1.display();
	newobj2.foo(100, 200);
	newobj2.display();

}

