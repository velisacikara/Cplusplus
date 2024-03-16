

#include <iostream>

using namespace std;

// THIS POINTER
/*
* Sadece non-static üye fonksiyonlarýn içinde kullanýlabilir.
* This pointer deðeri, hangi nesnenin üye fonksiyonu için çaðrýlmýþsa o nesnenin adresi anlamýna gelir.
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
	cout << this << "\n"; // this pointer'ý A'nýn adresini tutar.
	// Aþaðýdaki iki ifade de ayný anlama gelir.
	mx = 10;
	this->mx = 20;

	(*this).mx = 30;
}

class newclass {
	int mx;
public:
	int my;
	newclass& func();	// Bu fonksiyon çaðrýldýðý yere newclass nesnesinin adresini döndürecek.
	void func2();		// global bir fonksiyon olan foo2 this pointer ile çaðrýldý.
	newclass* func3();	// Bu fonksiyon çaðrýldýðý yere newclass nesnesinin adresini döndürecek.
};

newclass& newclass::func()
{
	return *this;
}

void foo2(newclass *) // global bir fonksiyon olan foo2 this pointer ile çaðrýldý.
{

}
void newclass::func2()
{
	foo2(this);
}

newclass* newclass::func3() // Bu fonksiyon çaðrýldýðý yere newclass nesnesinin adresini döndürecek.
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
	(newobj3.func3())->my = 10; // Nesnenin adresi üzerinden elemana eriþim

}

