#include <iostream>
// obrigat�rio no inicio para criar biblioteca 
using namespace std;

main () { 
	setlocale( LC_ALL, "portuguese");
	//parenteses � para fun��o; passar par�metros 
	
	float nota1, nota2, result;
	// n�meros decimais= reais 
	
	//inicio do processamento
	cout << "Informe a primeira nota:";
	cin >> nota1;
	//cin-recebe o valor que voce colocou; � de input.
	
	cout << "Informe a segunda nota:";
	cin>> nota2; 
	
	result = (nota1+nota2) / 2; 
	 //fim do processamento
	
	
	cout << "Sua nota foi de:" << result << "\n\n\n\n\n\n";
	if ( result < 6){
		cout << "Brand�o, tente novamente";
		
	}else if (result >= 6) {
		cout << " Brand�o, n�o fez mais que sua obriga��o";
	} 
}
