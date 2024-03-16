

#include <iostream>
using namespace std;

/* OOP */

// BÖLÜM - 1

/*
* OOP'de datalarý temsil eden birimlere class denir.
* Her bir class problem domainindeki varlýklardan birini temsil eder.
* Temel amaç problem domainini bu classlar ile ifade etmek.
* BMW'nin tanýmý class, BMW'nin kendisi object(instance) olur.
*/

/*
* Örnek bir class tanýmlamasý
* Class elemanlarý 
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
* Class elemanlarýna .(nokta), ->(ok) ve ::(resolution) operatörleri ile eriþilebilir.
* Class içindeki elemanlara eriþimi kontrol etmek için üç eriþim belirteci kullanýlýr: public, private ve protected.
* public interface: Herkese açýk elemanlarýn bulunduðu yer.
* private interface: Buradaki elemanlar bulunduðu classýn herhangi bir yerinde eriþilebilir.
* protected interface: kalýtým  ile ilgili.
* Bu eriþim belirteçleri class içerisinde kullanýlmazsa private yazýlmýþ olarak kabul edilir.
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

// BÖLÜM - 2
/*
* Resolution operatörü
* Resolution operatörü unary(tek olarak) olarak kullanýlýrsa namespace scope'da isim aramak için kullanýlýr.
*/

/*
int a = 10;

// Class içindeki ile ayný isimde bir fonksiyon 
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

// Resolution operatörü diðer kullaným
void resclass::foo(int x)
{
	a++; // private elemana eriþim mümkün, çünkü ayný class içerisinde

	::foo(12); // Maskelemeyi aþýp global fonksiyonu çaðýrýr. Böylece class fonsiyonu içinden global bir fonksiyona eriþilir.
	cout << "resclass::foo(int x) cagrildi\n";
	func(12.3, 4); // class içindeki fonksiyondan class içindeki baþka bir fonksiyon çaðrýldý.
}

int resclass::func(double d, int e)
{
	cout << "resclass::func(double d, int e) cagrildi\n";

	return mx;
}
*/

int main()
{
	// BÖLÜM  - 1
	/*

	membersclass memberc;
	memberc.mx = 30;
	// Burada my ve mz öðelerine eriþim saðlanamaz.

	membersclass* memberptr = &memberc;
	memberptr->mx = 20;
	// Burada my ve mz öðelerine pointer ile de eriþim saðlanamaz.
	*/

	/*****************************************************************************************/
	/*****************************************************************************************/


	// BÖLÜM - 2
	/*
	// Resolution operatörü tekli kullaným
	int a = 20;
	a = a + 1;
	::a = ::a + 2;
	cout << a << endl;  // 21 yazar, þu an bulunduðu scope'daki deðiþken kullanýlýr.
	cout << ::a << endl; // 12 yazar, namespace scope'daki deðiþken kullanýlýr.
	
	// foo(15); // global foo() çaðrýlýr. 
	resclass myob;
	myob.foo(15); // Class içindeki foo() çaðrýlýr. 
	*/

}

