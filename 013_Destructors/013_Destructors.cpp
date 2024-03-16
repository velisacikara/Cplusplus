
#include <iostream>
using namespace std;

/*
* Destructors
* Bir nesnenin hayatýný bitiren fonksiyondur.
* class ile ayný isimde olmalýdýr.
* Tek fark baþýna ~ iþareti gelir. 
* Destructor'lar parametre almazlar.
* Nesnenin hayatý bitecek iken yapýlmasý gereken bir iþlem varsa (dosya kapatma, memory free etme gibi) o zaman destructor'ý kendimiz yazmalýyýz.
* Onun dýþýnda destructor yazmaya gerek kalmaz, derleyici kendisi yazar.
* 
*/
/*
class Myclass {
public:
	Myclass(int);  // default constructor
	~Myclass(); // default destructor
};

Myclass::Myclass(int)
{
	cout << "constructor cagrildi\n";
	cout << this << "\n";
}

Myclass::~Myclass()
{
	cout << "destructor cagrildi\n";
	cout << this << "\n";
}

int main()
{
	Myclass m1{ 10 };
	Myclass m2{ 20 };
	
	// Ýþlem sýrasý
	// m1 için constructor çaðrýlýr.
	// m2 için constructor çaðrýlýr.
	// m2 için destructor çaðrýlýr.
	// m1 için destructor çaðrýlýr.
}

*/



// Member Initializer List


class Complex_Number {
	double m_imag, m_real;
public:
	Complex_Number(double i, double r); // constructor
	void display()const; // member function
};

// Member Initializer List tanýmlamasý.
// Nesne bu deðerler ile initialize edilir.
Complex_Number::Complex_Number(double i, double r) :m_imag{ i }, m_real{ r }
{

}

void Complex_Number::display()const
{
	cout << "real part: " << m_real << "\n";
	cout << "imag part: " << m_imag << "\n";
}




int main()
{
	Complex_Number m{ 10.3, 2.6 };
	m.display();
}

