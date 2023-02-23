#include <iostream>

using namespace std;

main () {
	setlocale( LC_ALL, "portuguese");

float  nascimento,result;

	cout << "Informe o seu ano de nascimento:";	
	cin >> nascimento;
	
		result = (2023-nascimento);

if (result) {
	cout << "Sua idade é de:" << result;
	}
}
