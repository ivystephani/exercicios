#include <iostream>

using namespace std;

main () {
	setlocale( LC_ALL, "portuguese");

float  lado,result;

	cout << "Informe o lado do quadrado:";	
	cin >> lado;
	
		result = (lado*lado);

if (result) {
	cout << "A área é de::" << result;
	}
}
