

#include <iostream>
using namespace std;

// Constructors
/*
* Constructors bir special member function'd�r.
* Bir nesneyi hayata getiren fonksiyondur.
* Bir nesne hayata gelmi�se mutlaka constructor� �a�r�lm��t�r. 
* Biz constructor yazmam�� olsak bile derleyici kendisi yazarak (compiler default function) �a��rm��t�r.
* Consturctor, class ismi ile ayn� isimde olur. 
* class�n herhangi bir yerinde olabilir. Ancak nesne olu�turabilmek i�in public interface k�sm�nda yer almas� gerekir.
* Parametreleri olmayan veya parametreleri varsay�lan arg�man olan constructor'a default constructor denir.
* Derleyicinin kendisinin olu�turdu�u constructor'a implicitly declared constructor denir.
* Bizim tan�mlad���m�z constructor'a user defined constructor denir.
* constructor'lar�n herhangi bir geri d�n�� de�eri yoktur.
* class i�erisinde veya d��ar�s�nda tan�mlanabilir.
*/


/*
class Myclass {
public:
	Myclass(); // User declared (kullan�c� taraf�ndan olu�turulmu�), Default constructor
	// Myclass(int x = 5); // Default constructor


};

Myclass::Myclass()
{
	cout << "constructor cagrildi\n";
}

Myclass m1; // �nce global alandaki nesne (statik �m�rl� nesne) olu�turuldu.

int main()
{
	cout << "main basladi\n";
	Myclass m3; // Nesne olu�turdu�umuz i�in otomatik olarak constructor �a�r�ld�.

}

Myclass m2; // �nce global alandaki nesne (statik �m�rl� nesne) olu�turuldu.

*/



// Example
/*
class student {
	int number;
	double gpa;
public:
	student(int, double); // constructors
	void display(); // member function
	double gpasquare(); // member function
};

student::student(int n, double g)
{
	cout << "constructor cagrildi\n";
	number = n;
	gpa = g;
}

void student::display()
{
	cout << "display cagrildi\n";
	cout <<"Number: " << number << "\n";
	cout << "GPA  : " << gpa << "\n";
	cout << "gpa square: " << gpasquare();
}

double student::gpasquare()
{
	return gpa * gpa;
}

int main()
{
	student s1(191110063, 3.69);
	s1.display();
}

*/
int main()
{

}







