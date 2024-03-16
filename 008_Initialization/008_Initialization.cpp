
#include <iostream>

using namespace std;

/*
* Initialization ve Auto Keyword
* 
* C++'da, C'deki initialize iþlemine (int x = 10) ek olarak iki farklý initialize yöntemi daha vardýr.
* 1. Value initialization
* 2. Uniform (Brace) initialization
* Bu iki yöntem sadece ilk atamada (initialize) kullanýlabilir, tekrardan atama yapýlacak olursa " = " operatörü ile yapýlýr.
* Okunabilirliði kolaylaþtýrýr.
* Most Vexing Parse'a karþý bir önlem alýr.
* Narrowing Convertions veri kaybýna sebep olmayý engelemek için syntax hatasý verir.
*/

/*
* Auto Keyword
* C++'da otomatik tür çýkarýmý yapan bir anahtar kelimedir.
* Deðiþkene atanan deðere göre türüne karar verir.
* Dizilerin tanýmlanmasýnda ve fonksiyon parametrelerinde kullanýlamaz.
* Fonksiyon return türü olarak kullanýlabilir.
*/

/* Initialization */
/*
int x = 10;

int y(20); // Value initialization

int z{ 30 }; // Uniform ya da Brace initialization

int t[]{ 1,2 }; // Uniform ya da Brace initialization

int main()
{
	double dval = 12.34;
	//int ival = dval; // Warning verir.
	int ival = static_cast<int>(dval); // Önlemek için cast iþlemi yapýlýr.
	//int ival2{ dval }; // Error verir.
	int ival2{ static_cast<int>(dval) }; // Önlemek için cast iþlemi yapýlýr.

}
*/


/* auto keyword */
/*
int a1 = 10;
auto a2 = 10; // int

double b1 = 13.4;
auto b2 = 13.4; // double

float c1 = 2.5;
auto c2 = 2.5f; // float

int* aptr1 = &a1;
auto aptr2 = &a1; // int*

auto sum(int a, int b) // fonksyion return türü
{
	return a + b;
}

void foo(int, double, float)
{

}
// void(*fptr)(int, double, float) = &foo;
auto fptr = &foo; // fonksiyon pointer

int d = 10;
auto& r = d; // referans

int e = 20;
const int* const ptr = &e;
auto aptr = ptr; // Ýkinci const ifadesi düþüyor, dikkat etmek gerekiyor.

*/
int main()
{

}


