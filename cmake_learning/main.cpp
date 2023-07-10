#include <iostream>
#include <string>
#include "multiplier.h"
#include "addition.h"
#include "printer.h"

using namespace std;
int main()
{
	float a, b, result;
	cout << "Input a: ";
	cin >> a;
	cout << endl;
	cout << "Input b: ";
	cin >> b;
	cout << endl;

	result = add(a,b);
	print_result("Add result : ", result);

	result = mul(a,b);
	print_result("Mul result : ", result);
	return 0;
}
