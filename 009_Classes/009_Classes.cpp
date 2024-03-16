

#include <iostream>
using namespace std;

/* OOP */

// B�L�M - 1

/*
* OOP'de datalar� temsil eden birimlere class denir.
* Her bir class problem domainindeki varl�klardan birini temsil eder.
* Temel ama� problem domainini bu classlar ile ifade etmek.
* BMW'nin tan�m� class, BMW'nin kendisi object(instance) olur.
*/

/*
* �rnek bir class tan�mlamas�
* Class elemanlar� 
* Data members, Function members, Type members
*/
/*
class Myclass {
	int mx, my;
	double mz;
	static int mt;
	void foo(int, double);
	static int func(double, short);
	typedef int word;
	class BMW;
};
*/
 
/*
* Class elemanlar�na .(nokta), ->(ok) ve ::(resolution) operat�rleri ile eri�ilebilir.
* Class i�indeki elemanlara eri�imi kontrol etmek i�in �� eri�im belirteci kullan�l�r: public, private ve protected.
* public interface: Herkese a��k elemanlar�n bulundu�u yer.
* private interface: Buradaki elemanlar bulundu�u class�n herhangi bir yerinde eri�ilebilir.
* protected interface: kal�t�m  ile ilgili.
* Bu eri�im belirte�leri class i�erisinde kullan�lmazsa private yaz�lm�� olarak kabul edilir.
*/
/*
class membersclass {
public:
	int mx = 10;
private:
	int my = 12;
protected:
	int mz = 14;
};
*/

/*****************************************************************************************/
/*****************************************************************************************/
/*****************************************************************************************/
/*****************************************************************************************/

// B�L�M - 2
/*
* Resolution operat�r�
* Resolution operat�r� unary(tek olarak) olarak kullan�l�rsa namespace scope'da isim aramak i�in kullan�l�r.
*/

/*
int a = 10;

// Class i�indeki ile ayn� isimde bir fonksiyon 
void foo(int x)
{
	cout << "global foo(int x) cagrildi\n";
}

class resclass {
private:
	int a, b, c;
public:
	int mx, my;
	void foo(int);
	int func(double, int);
};

// Resolution operat�r� di�er kullan�m
void resclass::foo(int x)
{
	a++; // private elemana eri�im m�mk�n, ��nk� ayn� class i�erisinde

	::foo(12); // Maskelemeyi a��p global fonksiyonu �a��r�r. B�ylece class fonsiyonu i�inden global bir fonksiyona eri�ilir.
	cout << "resclass::foo(int x) cagrildi\n";
	func(12.3, 4); // class i�indeki fonksiyondan class i�indeki ba�ka bir fonksiyon �a�r�ld�.
}

int resclass::func(double d, int e)
{
	cout << "resclass::func(double d, int e) cagrildi\n";

	return mx;
}
*/

int main()
{
	// B�L�M  - 1
	/*

	membersclass memberc;
	memberc.mx = 30;
	// Burada my ve mz ��elerine eri�im sa�lanamaz.

	membersclass* memberptr = &memberc;
	memberptr->mx = 20;
	// Burada my ve mz ��elerine pointer ile de eri�im sa�lanamaz.
	*/

	/*****************************************************************************************/
	/*****************************************************************************************/


	// B�L�M - 2
	/*
	// Resolution operat�r� tekli kullan�m
	int a = 20;
	a = a + 1;
	::a = ::a + 2;
	cout << a << endl;  // 21 yazar, �u an bulundu�u scope'daki de�i�ken kullan�l�r.
	cout << ::a << endl; // 12 yazar, namespace scope'daki de�i�ken kullan�l�r.
	
	// foo(15); // global foo() �a�r�l�r. 
	resclass myob;
	myob.foo(15); // Class i�indeki foo() �a�r�l�r. 
	*/

}

