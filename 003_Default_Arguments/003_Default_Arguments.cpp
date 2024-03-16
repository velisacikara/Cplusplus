
/*
**** Default Arguments - Varsayýlan Argümanlar ****
***************************************************
Bir fonksiyonun aldýðý parametre sayýsýndan daha az parametre göndererek fonksiyonu çaðýrmada kullanýlýr.
Örneðin iki parametre alan bir fonksiyona tek parametre göndererek veya hiç göndermeyerek fonksiyonu çaðýrmak mümkündür.
Önceden belirlenen deðerler girilmeyen parametreler yerine geçer.
Birden çok parametre alan fonksiyonlarda çoðunlukla ayný deðeri alan parametreler için kullanýlýr.
Bir fonksiyona istenen parametrenin gönderilip gönderilmediðini kontrol etmede kullanýlýr.
Ýstenen parametre için varsayýlan argüman örneðin -1 seçilir, gelen deðerin -1 olmasý o parametrenin alýnamadýðý anlamýna gelir.
Varsayýlan argüman tanýmlamasý ya fonksiyon prototipinde ya da fonksiyon gövdesinde olmalýdýr (Ýkisinden birinde bulunmalýdýr).
Varsayýlan argümanlar int, double, char gibi deðiþkenler, user defined yapýlar (struct gibi), referanslar olabilir.
Varsayýlan argümanlar hep en sonda yer almalýdýr. Birden fazla varsayýlan argüman varsa en saðdan yerleþtirilerek fonksiyona eklenir.
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

