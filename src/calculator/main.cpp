#include <iostream>
#include "include/Calculator.h"
#include "include/SymbolOperationMapper.h"

using namespace std;

int main()
{
	Calculator calculator = Calculator(new SymbolOperationMapper());
	double a, b;
	string operation;

	cout << "Enter first number:";
	cin >> a;

	cout << "Enter operation:";
	cin >> operation;

	cout << "Enter second number:";
	cin >> b;

	cout << "Result is: " << calculator.calculate(a, b, operation) << endl;

	return 0;
}
