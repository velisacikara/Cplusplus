
#include <iostream>

using namespace std;

/*
* Function Overloading
* Ayn� isimde olan ancak parametreleri birbirinden farkl� olan fonksyionlard�r.
* Function overloading ger�ekle�mesi i�in:
* Ayn� scope'da ayn� isimde iki veya daha fazla fonksiyon bulunmal�d�r.
* Fonksyion bildirimlerinde fonksiyonlar�n imzalar� (parametre k�sm�) farkl� olmal�d�r.
* int foo(double);
* void foo(double, char*);
* 
* Ayn� scope'da ayn� isimde iki veya daha fazla fonksiyon bulunmas� durumunda �� durum s�z konusudur.
* 1. Redeclaration: Fonksiyonun prototipinin ayn� �ekilde yeniden tan�mlanmas�.
* 2. Function overloading.
* 3. Ge�ersiz durum: ayn� isimde ve ayn� parametrelere sahip fonksiyonlar�n olmas� hataya sebep olur.
* 
* Function overloading i�in ilk olarak aday fonksiyonlar (candidate functions) belirlenir.
* Ard�ndan ge�erli bir bi�imde �a�r�labilecek fonksiyonlar (viable functions) beirlenir.
* �rne�in pointer alan bir fonksiyona int de�i�ken parametre olarak verilemez.
* Sonras�nda en iyi e�le�en fonksiyon belirlenir. Bu durum, a�a��daki s�raya g�re belirlenir.
* 1-Exact match, 2-Promotion, 3-Standard Conversion, 4-User Defined Conversion
* 
* Hi�bir �ekilde e�le�me olmamas� durumuna "No Match" durumu denir.
* 
*/


/*
int foo(int a); // Exact match oldu�u i�in bu �a�r�l�r.
int foo(double b); // Daha iyi bir tan�mlama bulundu�u i�in elenir.
int foo(int a, double b); // �ki parametre ald��� i�in elendi. 
int foo(int* a); // Pointer parametre ald��� i�in elendi.

int main()
{
	foo(15);
}
*/

/*
// Fonksiyon �a�r�s�nda bulunan parametre her iki tan�mlamaya da uygun oldu�u i�in burada belirsizlik durumu ortaya ��kar.
// Buna "Ambiguity" denir.
void func(unsigned int);
void func(double);

int main()
{
	func(20);
}
*/

int main()
{

}
