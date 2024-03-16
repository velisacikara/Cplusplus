
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
* int alt� t�rlerin (char, short vb.) int'e y�kseltilerek i�lem yap�las�na "Integral Promotion" denir.
* float'�n double veri t�r�ne d�n���m�ne "Promotion" denir.
* �ntegral promotion, promotion'un bir alt dal�d�r.
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
* gibi d�n���mler Standard Conversion olarak adland�r�l�r.
*/

/*
* User Defined Conversion
* Bir user defined t�rden (class gibi) baka bir user defined t�re
* veya bir user defined t�rden int, float, bool gibi t�re yap�lan d�n���mlere User Defined Conversion denir.
* 
*/

int main()
{

}
