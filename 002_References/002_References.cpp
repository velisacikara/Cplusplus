
/*
References - 2
**** �zellikler ****
Call by Reference yap�s�nda s�kl�kla kullan�l�r.
Reference to Reference yok.
Elemanlar� referans olan bir dizi tan�mlanamaz (pointerlarda bu �zellik var).
Null reference yok.
Function Reference var.
Bir pointer i�in de referans tan�mlanabilir.
Referanslar bulundu�u scope boyunca ayn� nesneyi g�sterir.
const olarak tan�mlanm�� bir de�i�ken const bir reference ile e�lenebilir *(�nemli).
*/

#include <iostream>
using namespace std;


/*
// Example - 1
void swap(int& r1, int& r2)
{
    int temp = r1;
    r1 = r2;
    r2 = temp;
}

struct Data {
    int a, b;
};
void set_struct(Data& d1)
{
    d1.a = 0;
    d1.b = 0;
}
*/

/*
 // Example - 2
int c = 50;

int& foo()
{
    return c;
}
*/

/*
// Example - 5
void findMinMax(const int arr[], int n, int& min, int& max) {
    min = max = arr[0]; // �lk eleman� ba�lang��ta min ve max olarak kabul ediyoruz

    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i]; // Dizideki bir eleman min'den daha k���kse, min'i g�ncelliyoruz
        }
        else if (arr[i] > max) {
            max = arr[i]; // Dizideki bir eleman max'tan daha b�y�kse, max'� g�ncelliyoruz
        }
    }
}
*/

/*
// Example - 6
int& findValue(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return arr[i]; // Hedef de�eri i�eren dizinin eleman�n�n referans�n� d�nd�r
        }
    }
    // E�er hedef de�er bulunamazsa, dizinin ilk eleman�n�n referans�n� d�nd�r
    return arr[0];
}
*/

int main()
{
    /*
    // Example - 1
    int x = 10, y = 20;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    swap(x, y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    cout << "\n\n";

    Data mydata = { 30, 40 };
    cout << "a: " << mydata.a << "\n";
    cout << "b: " << mydata.b << "\n";
    set_struct(mydata);
    cout << "a: " << mydata.a << "\n";
    cout << "b: " << mydata.b << "\n";
    */

    /*
    // Example - 2
    cout << "c: " << c << "\n";
    ++foo();
    cout << "c: " << c << "\n";
    */

    /*
    // Example - 3
    int d = 60, e = 70;
    const int& r = d; // Sadece d'yi g�steren bir reference olur.
    // r = e; �eklinde bir atama yap�lamaz.
    */

    /*
    // Example - 4
    const int f = 80;
    const int& r = f;
    // const bir de�i�ken const bir reference ile e�lenebilir.
    */

    /*
    // Example - 5
    const int size = 6;
    int numbers[size] = { 7, 18, 3, 14, 9, 5 };
    int min, max;

    findMinMax(numbers, size, min, max);

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
    */


    /*
    // Example - 6
    const int size = 5;
    int numbers[size] = { 10, 20, 30, 40, 50 };

    // 30 de�erini i�eren dizinin eleman�n�n referans�n� bulma
    int& ref = findValue(numbers, size, 30);

    // Referans arac�l���yla de�eri de�i�tirme
    ref = 35;

    // De�i�tirilmi� de�eri ekrana yazd�rma
    cout << "New value: " << numbers[2] << endl;

    return 0;
    */




}

