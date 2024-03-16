
#include <iostream>

using namespace std;

/*
// Const Overloading 
void foo(int*)
{
	cout << "foo(int*) cagrildi.\n";
}

void foo(const int*)
{
	cout << "foo(const int*) cagrildi.\n";
}

void func(int&)
{
	cout << "foo(int&) cagrildi.\n";
}

void func(const int&)
{
	cout << "foo(const int&) cagrildi.\n";
}

int main()
{
	cout << "****For Pointers****\n";
	int x = 10;
	const int y = 20;
	foo(&x);
	foo(&y);
	cout << "\n\n";
	cout << "****For References****\n";
	int z = 30;
	const int t = 40;
	func(x);
	func(y);
}
*/
/* ******** Examples ******** */
/*
// Example - 1
// Function Overloading deðil.
// Redeclaration durumu

typedef int word;

void foo(int)
{
	cout << "foo(int) cagrildi.\n";
}

void foo(word)
{
	cout << "foo(word) cagrildi.\n";
}

int main()
{
	int x = 10;
	word y = 20;
	foo(x);
	foo(y);
}
*/

/*
// Example - 2
// funcyion Overloading'dir.
// Ama Ambiguity var, hangi fonksiyonun çaðrýlacaðý belli deðil.

void foo(int&)
{
	cout << "foo(int&) cagrildi.\n";
}
void foo(int)
{
	cout << "foo(int) cagrildi.\n";
}

int main()
{
	int x = 10;
	foo(x);
}
*/


/*
// Example - 3
// function Overloading deðil.
// Ayný fonksiyon tekrar tanýmlandý.

void foo(int a)
{
	cout << "foo(int a) cagrildi.\n";
}
void foo(int a = 50)
{
	cout << "foo(int a = 50) cagrildi.\n";
}

int main()
{
	int x = 10;
	foo(x);
}
*/


/*
// Example - 4
// Function Overloading deðil.
// Redeclaration

void foo(int)
{
	cout << "foo(int) cagrildi.\n";
}
void foo(const int)
{
	cout << "foo(const int) cagrildi.\n";
}

int main()
{
	int x = 10;
	const int y = 20;
	foo(x);
	foo(y);
}
*/

/*
// Example - 6
// Bu fonksiyonlarýn tümü aslýnda birer Redeclaration
// Bu sebeple burada ambiguity var.

void test(int[50])
{

}
void test(int* p)
{

}
void test(int[5])
{

}
void test(int[])
{

}

int main()
{
	int a[5] = { 2,4,6,8,10 };
	//test(a);

}
*/


int main()
{

}

