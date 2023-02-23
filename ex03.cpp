#include <iostream>
// obrigatório no inicio para criar biblioteca 
using namespace std;

main () { 
	setlocale( LC_ALL, "portuguese");
	//parenteses é para função; passar parâmetros 
	
	float nota1, nota2, result;
	// números decimais= reais 
	
	//inicio do processamento
	cout << "Informe a primeira nota:";
	cin >> nota1;
	//cin-recebe o valor que voce colocou; é de input.
	
	cout << "Informe a segunda nota:";
	cin>> nota2; 
	
	result = (nota1+nota2) / 2; 
	 //fim do processamento
	
	
	cout << "Sua nota foi de:" << result << "\n\n\n\n\n\n";
	if ( result < 6){
		cout << "Brandão, tente novamente";
		
	}else if (result >= 6) {
		cout << " Brandão, não fez mais que sua obrigação";
	} 
}
