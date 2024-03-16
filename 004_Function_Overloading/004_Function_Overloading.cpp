
#include <iostream>

using namespace std;

/*
* Function Overloading
* Ayný isimde olan ancak parametreleri birbirinden farklý olan fonksyionlardýr.
* Function overloading gerçekleþmesi için:
* Ayný scope'da ayný isimde iki veya daha fazla fonksiyon bulunmalýdýr.
* Fonksyion bildirimlerinde fonksiyonlarýn imzalarý (parametre kýsmý) farklý olmalýdýr.
* int foo(double);
* void foo(double, char*);
* 
* Ayný scope'da ayný isimde iki veya daha fazla fonksiyon bulunmasý durumunda üç durum söz konusudur.
* 1. Redeclaration: Fonksiyonun prototipinin ayný þekilde yeniden tanýmlanmasý.
* 2. Function overloading.
* 3. Geçersiz durum: ayný isimde ve ayný parametrelere sahip fonksiyonlarýn olmasý hataya sebep olur.
* 
* Function overloading için ilk olarak aday fonksiyonlar (candidate functions) belirlenir.
* Ardýndan geçerli bir biçimde çaðrýlabilecek fonksiyonlar (viable functions) beirlenir.
* Örneðin pointer alan bir fonksiyona int deðiþken parametre olarak verilemez.
* Sonrasýnda en iyi eþleþen fonksiyon belirlenir. Bu durum, aþaðýdaki sýraya göre belirlenir.
* 1-Exact match, 2-Promotion, 3-Standard Conversion, 4-User Defined Conversion
* 
* Hiçbir þekilde eþleþme olmamasý durumuna "No Match" durumu denir.
* 
*/


/*
int foo(int a); // Exact match olduðu için bu çaðrýlýr.
int foo(double b); // Daha iyi bir tanýmlama bulunduðu için elenir.
int foo(int a, double b); // Ýki parametre aldýðý için elendi. 
int foo(int* a); // Pointer parametre aldýðý için elendi.

int main()
{
	foo(15);
}
*/

/*
// Fonksiyon çaðrýsýnda bulunan parametre her iki tanýmlamaya da uygun olduðu için burada belirsizlik durumu ortaya çýkar.
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
