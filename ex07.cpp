#include <iostream>

using namespace std;

main(){
	
setlocale( LC_ALL, "portuguese");

float salario,salarioNovo;

cout << "Informe o seu salario:";	
cin>> salario;

if (salario<=1000) {
	salarioNovo = salario*1.15;
	cout<< "15% de aumento seu salário era:"  << salario << "foi para:" << salarioNovo;
} else if ( salario >= 1000.01 && salario <= 2000){
	salarioNovo = salario*1.10;
	cout<< "10% de aumento seu salário era:" << salario << "foi para:" << salarioNovo;
}else{
	salarioNovo= salario*1.05;
		cout<< "5% de aumento seu salário era:" << salario << "foi para:" << salarioNovo;
}
}
