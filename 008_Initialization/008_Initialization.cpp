
#include <iostream>

using namespace std;

/*
* Initialization ve Auto Keyword
* 
* C++'da, C'deki initialize i�lemine (int x = 10) ek olarak iki farkl� initialize y�ntemi daha vard�r.
* 1. Value initialization
* 2. Uniform (Brace) initialization
* Bu iki y�ntem sadece ilk atamada (initialize) kullan�labilir, tekrardan atama yap�lacak olursa " = " operat�r� ile yap�l�r.
* Okunabilirli�i kolayla�t�r�r.
* Most Vexing Parse'a kar�� bir �nlem al�r.
* Narrowing Convertions veri kayb�na sebep olmay� engelemek i�in syntax hatas� verir.
*/

/*
* Auto Keyword
* C++'da otomatik t�r ��kar�m� yapan bir anahtar kelimedir.
* De�i�kene atanan de�ere g�re t�r�ne karar verir.
* Dizilerin tan�mlanmas�nda ve fonksiyon parametrelerinde kullan�lamaz.
* Fonksiyon return t�r� olarak kullan�labilir.
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
	int ival = static_cast<int>(dval); // �nlemek i�in cast i�lemi yap�l�r.
	//int ival2{ dval }; // Error verir.
	int ival2{ static_cast<int>(dval) }; // �nlemek i�in cast i�lemi yap�l�r.

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

auto sum(int a, int b) // fonksyion return t�r�
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
auto aptr = ptr; // �kinci const ifadesi d���yor, dikkat etmek gerekiyor.

*/
int main()
{

}


