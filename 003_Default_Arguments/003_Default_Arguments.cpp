
/*
**** Default Arguments - Varsay�lan Arg�manlar ****
***************************************************
Bir fonksiyonun ald��� parametre say�s�ndan daha az parametre g�ndererek fonksiyonu �a��rmada kullan�l�r.
�rne�in iki parametre alan bir fonksiyona tek parametre g�ndererek veya hi� g�ndermeyerek fonksiyonu �a��rmak m�mk�nd�r.
�nceden belirlenen de�erler girilmeyen parametreler yerine ge�er.
Birden �ok parametre alan fonksiyonlarda �o�unlukla ayn� de�eri alan parametreler i�in kullan�l�r.
Bir fonksiyona istenen parametrenin g�nderilip g�nderilmedi�ini kontrol etmede kullan�l�r.
�stenen parametre i�in varsay�lan arg�man �rne�in -1 se�ilir, gelen de�erin -1 olmas� o parametrenin al�namad��� anlam�na gelir.
Varsay�lan arg�man tan�mlamas� ya fonksiyon prototipinde ya da fonksiyon g�vdesinde olmal�d�r (�kisinden birinde bulunmal�d�r).
Varsay�lan arg�manlar int, double, char gibi de�i�kenler, user defined yap�lar (struct gibi), referanslar olabilir.
Varsay�lan arg�manlar hep en sonda yer almal�d�r. Birden fazla varsay�lan arg�man varsa en sa�dan yerle�tirilerek fonksiyona eklenir.
***************************************************
*/

#include <iostream>
using namespace std;


int foo(int x, int y = 50)
{
    cout << "x: " << x << "\n";
    cout << "y: " << y << "\n";
    
    return 1;
}

void open_screen(int height = 10, int width = 20, const char* pname = "Veli")
{

}

int g = 10;
void ref_foo(int& r = g)
{

}

int f1()
{
    return 5;
}
int f2()
{
    return 6;
}

void f3(int x = f1(), int y = f2())
{

}

void func(int x, int y, int z = 30);
// void func(int x = 10, int y = 20, int z);
// void func(int x = 10, int y = 20, int z = 30);

void func(int x, int y, int z)
{

}

int main()
{
    foo(2); // foo(2, 50);
    cout<<"\n";
    foo(2, 40); // foo(2, 40);
    open_screen();
    open_screen(50);
    open_screen(40, 5);
    open_screen(60, 30, "Ahmet");

    int h = 20;
    ref_foo(h);     // ref_foo(h);
    ref_foo();      // ref_foo(g);
    f3();           // f3(f1(), f2());
    f3(10);         // f3(10, f2());
    f3(10, 20);     // f3( 10, 20);
 //   func();         // func(10, 20, 30);
}

