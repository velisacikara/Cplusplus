
#include <iostream>

using namespace std;

/*
* Type Casting
* ************
* 1. static_cast --> static_cast<hedef type>(tek operand)
* Default türler arası (int to double, char to int gibi) cast işlemine static cast denir.
* 
* 2. const_cast --> const_cast<hedef type>(tek operand)
* const pointerdan herhangi bir pointer türüne cast işlemine const cast denir.
* 
* 3. reinterpret_cast --> reinterpret_cast<hedef type>(tek operand)
* Farklı adres türleri (farklı pointer türleri double* to int*) arasında yapılan cast işlemine reinterpret cast denir.
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

