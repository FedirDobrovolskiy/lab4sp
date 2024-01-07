#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
	
	Calculator calculator;
	
	double a = 6.9;
	double b = 9.6;
	
    cout << "Summary of " << a << " + " << b << " = " << calculator.Add(a, b) << endl;
	
	cout << "Difference of " << a << " - " << b << " = " << calculator.Sub(a, b) << endl;
	
    return 0;
	
}
