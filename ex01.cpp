#include <iostream>

using namespace std;

main(){
	
setlocale( LC_ALL, "portuguese");

float  nascimento,result;

	cout << "Informe o seu ano de nascimento:";	
	cin >> nascimento;
	
		result = (2023-nascimento);

if (result <16) {
	cout << "Voc� ainda n�o pode votar";
		
} else if (result >16){
	cout << "Voc� j� pode votar!";
}
}
	
