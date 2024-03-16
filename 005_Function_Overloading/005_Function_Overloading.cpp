
#include <iostream>

using namespace std;

/*
// Example 1 - Exact Match
void foo(int)
{
	cout << "foo(int) cagrildi.\n";
}
void foo(double)
{
	cout << "foo(double) cagrildi.\n";
}

int main()
{
	foo(15.3);

}
*/

// Example 2 - Integral Promotion 
/*
* int altý türlerin (char, short vb.) int'e yükseltilerek iþlem yapýlasýna "Integral Promotion" denir.
* float'ýn double veri türüne dönüþümüne "Promotion" denir.
* Ýntegral promotion, promotion'un bir alt dalýdýr.
*/
/*
void foo(int)
{
	cout << "foo(int) cagrildi.\n";
}

void foo(short)
{
	cout << "foo(short) cagrildi.\n";
}

int main()
{
	bool x = true;
	foo(x);
}
*/

/*
// Example 3 - Promotion
void foo(double)
{
	cout << "foo(double) cagrildi.\n";
}

void foo(int)
{
	cout << "foo(int) cagrildi.\n";
}

int main()
{
	float x = 15.40;
	foo(x);
}
*/

/*
* Standard Conversion
* 
* int ----> char
* long ----> bool
* 
* double ----> char
* double ----> int
* 
* int ----> double
* 
* unsigned char ----> bool
* 
* gibi dönüþümler Standard Conversion olarak adlandýrýlýr.
*/

/*
* User Defined Conversion
* Bir user defined türden (class gibi) baka bir user defined türe
* veya bir user defined türden int, float, bool gibi türe yapýlan dönüþümlere User Defined Conversion denir.
* 
*/

int main()
{

}
