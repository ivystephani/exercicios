#include <iostream>

using namespace std;

main(){

setlocale( LC_ALL, "portuguese");

float numero;

	cout << "Informe seu n�mero:";	
	cin >> numero;

if (numero <0) {
	cout << "Seu n�mero � negativo";
		
} else if (numero >0){
	cout << "Seu n�mero � positivo";
		
} else if (numero == 0){
	cout << "Seu n�mero � neutro";
}
}
