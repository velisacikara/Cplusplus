
#include <iostream>

using namespace std;

/*
* Type Casting
* ************
* 1. static_cast --> static_cast<hedef type>(tek operand)
* Default t�rler aras� (int to double, char to int gibi) cast i�lemine static cast denir.
* 
* 2. const_cast --> const_cast<hedef type>(tek operand)
* const pointerdan herhangi bir pointer t�r�ne cast i�lemine const cast denir.
* 
* 3. reinterpret_cast --> reinterpret_cast<hedef type>(tek operand)
* Farkl� adres t�rleri (farkl� pointer t�rleri double* to int*) aras�nda yap�lan cast i�lemine reinterpret cast denir.
* 
* 4. dynamic_cast (Daha sonra eklenecek!)
* 
*/

int main()
{
	/*
	* static_cast
	*/
	cout << "static_cast\n";
	int i1 = 10;
	int i2 = 3;
	double i3 = static_cast < double > (i1) / i2;
	cout << i3 << "\n\n";

	/*
	* const_cast
	*/
	cout << "const_cast\n\n";
	const char* cptr = "veli";
	char* p = const_cast<char*>(cptr);

	/*
	* reinterpret_cast
	*/
	cout << "reinterpret_cast\n";
	double dval = 12.6;
	double* dptr = &dval;
	int* iptr = reinterpret_cast<int*>(dptr);

}

