

#include <iostream>
using namespace std;

// Constructors
/*
* Constructors bir special member function'dýr.
* Bir nesneyi hayata getiren fonksiyondur.
* Bir nesne hayata gelmiþse mutlaka constructorý çaðrýlmýþtýr. 
* Biz constructor yazmamýþ olsak bile derleyici kendisi yazarak (compiler default function) çaðýrmýþtýr.
* Consturctor, class ismi ile ayný isimde olur. 
* classýn herhangi bir yerinde olabilir. Ancak nesne oluþturabilmek için public interface kýsmýnda yer almasý gerekir.
* Parametreleri olmayan veya parametreleri varsayýlan argüman olan constructor'a default constructor denir.
* Derleyicinin kendisinin oluþturduðu constructor'a implicitly declared constructor denir.
* Bizim tanýmladýðýmýz constructor'a user defined constructor denir.
* constructor'larýn herhangi bir geri dönüþ deðeri yoktur.
* class içerisinde veya dýþarýsýnda tanýmlanabilir.
*/


/*
class Myclass {
public:
	Myclass(); // User declared (kullanýcý tarafýndan oluþturulmuþ), Default constructor
	// Myclass(int x = 5); // Default constructor


};

Myclass::Myclass()
{
	cout << "constructor cagrildi\n";
}

Myclass m1; // Önce global alandaki nesne (statik ömürlü nesne) oluþturuldu.

int main()
{
	cout << "main basladi\n";
	Myclass m3; // Nesne oluþturduðumuz için otomatik olarak constructor çaðrýldý.

}

Myclass m2; // Önce global alandaki nesne (statik ömürlü nesne) oluþturuldu.

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







