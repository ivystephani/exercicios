#include <iostream>

using namespace std;

main () {	
	string login, senha;
	
	
	cout << "Informe o seu login:";
	cin >> login;
	
	
	cout << "Informe sua senha:";
	cin>> senha; 
	
	if(login == "admin" && senha == "admin"){
		cout << "pode entrar";
	}else { 
		cout << "Login e senha incorretos";
	}
}
