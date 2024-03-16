

#include <iostream>

using namespace std;

// class i�indeki function overloading 


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

// �nemli!!!
// class i�indeki t�m fonksiyonlar�n asl�nda bir gizli parametresi vard�r. 
// Bu parametre bulunduklar� class�n bir pointer'�d�r.
// Fonksiyonlar bu pointer sayesinde mx, my gibi de�i�kenler �zerinde i�lem yapabilir.


// �rnek 
class newclass
{
public:
	int mx, my;
	void foo(int, int);
	void display()const; 
	// display fonksiyonu sonundaki const, de�i�kenler �zerinde bir i�lem yap�lmayaca��n�, sadece okuma yap�laca��n� belirtir.
	// getter bir fonksiyon oldu�unu belirtir.
	// const olan bir fonksiyonda class i�erisinde bulunan const olmayan bir fonksiyon �a�r�lamaz.
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

