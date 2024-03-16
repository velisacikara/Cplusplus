

#include <iostream>

using namespace std;

// THIS POINTER
/*
* Sadece non-static �ye fonksiyonlar�n i�inde kullan�labilir.
* This pointer de�eri, hangi nesnenin �ye fonksiyonu i�in �a�r�lm��sa o nesnenin adresi anlam�na gelir.
*/

class Myclass {
	int mx;
	void func();
public:
	void foo();
};

void Myclass::foo()
{
	cout << "void Myclass::foo() cagrildi." << "\n";
	cout << this << "\n"; // this pointer'� A'n�n adresini tutar.
	// A�a��daki iki ifade de ayn� anlama gelir.
	mx = 10;
	this->mx = 20;

	(*this).mx = 30;
}

class newclass {
	int mx;
public:
	int my;
	newclass& func();	// Bu fonksiyon �a�r�ld��� yere newclass nesnesinin adresini d�nd�recek.
	void func2();		// global bir fonksiyon olan foo2 this pointer ile �a�r�ld�.
	newclass* func3();	// Bu fonksiyon �a�r�ld��� yere newclass nesnesinin adresini d�nd�recek.
};

newclass& newclass::func()
{
	return *this;
}

void foo2(newclass *) // global bir fonksiyon olan foo2 this pointer ile �a�r�ld�.
{

}
void newclass::func2()
{
	foo2(this);
}

newclass* newclass::func3() // Bu fonksiyon �a�r�ld��� yere newclass nesnesinin adresini d�nd�recek.
{
	return this;
}

int main()
{
	Myclass A;
	cout << &A << "\n";
	A.foo();

	cout << "\n\n";

	newclass newobj;
	cout << &newobj << "\n";
	cout << &newobj.func() << "\n";

	cout << "\n\n";

	newclass newobj2;
	newobj2.func2();

	newclass newobj3;
	(newobj3.func3())->my = 10; // Nesnenin adresi �zerinden elemana eri�im

}

