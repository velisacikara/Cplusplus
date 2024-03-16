
#include <iostream>
using namespace std;

/*
* Destructors
* Bir nesnenin hayat�n� bitiren fonksiyondur.
* class ile ayn� isimde olmal�d�r.
* Tek fark ba��na ~ i�areti gelir. 
* Destructor'lar parametre almazlar.
* Nesnenin hayat� bitecek iken yap�lmas� gereken bir i�lem varsa (dosya kapatma, memory free etme gibi) o zaman destructor'� kendimiz yazmal�y�z.
* Onun d���nda destructor yazmaya gerek kalmaz, derleyici kendisi yazar.
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
	
	// ��lem s�ras�
	// m1 i�in constructor �a�r�l�r.
	// m2 i�in constructor �a�r�l�r.
	// m2 i�in destructor �a�r�l�r.
	// m1 i�in destructor �a�r�l�r.
}

*/



// Member Initializer List


class Complex_Number {
	double m_imag, m_real;
public:
	Complex_Number(double i, double r); // constructor
	void display()const; // member function
};

// Member Initializer List tan�mlamas�.
// Nesne bu de�erler ile initialize edilir.
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

