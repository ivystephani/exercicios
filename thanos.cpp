#include <iostream> //Sempre come�ar c++ com este comando
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int N1, N2, N3, esconde;
	int x;
	bool venceu = false;
	bool fim = false;
	srand (time(NULL));
	
	esconde = rand() % 49 + 0;
	
	
//	cout << "Thanos se encondeu numa floresta com 50 arvores, descubra onde ele est�!"
	while(fim == false){
		
	cout << "\nInforme o nivel em que quer jogar (1=facil, 2=medio, 3=dificil):";
	cin >> N2;
	
	int tentativas;
	if (N2 == 1){
		tentativas = 15;
	}else if (N2 == 2){
		tentativas = 10;
	}else {
		tentativas = 5;
	}
	

	
	if(N2 == 3)
	for(x = 0; x < 5; x = x + 1){
		cout << "\n\nInforme qual arvore quer atacar: ";
	cin >> N1;
	if(N1 < esconde){
		cout << "Thanos est� mais a direita";
	}else if(N1 > esconde){
		cout << "Thanos est� mais a esquerda";
	}else if(N1 == esconde){
		cout << "Voc� encontrou thanos!";
		venceu = true;
		break;

	}
	}	
	
	
		if(N2 == 2)
	for(x = 0; x < 10; x = x + 1){
		cout << "\n\nInforme qual arvore quer atacar: ";
	cin >> N1;
	if(N1 < esconde){
		cout << "Thanos est� mais a direita";
	}else if(N1 > esconde){
		cout << "Thanos est� mais a esquerda";
	}else if(N1 == esconde){
		cout << "Voc� encontrou thanos!";
		venceu = true;
		break;

	}
	}	
	
	
		if(N2 == 1)
	for(x = 0; x < 15; x = x + 1){
		cout << "\n\nInforme qual arvore quer atacar: ";
	cin >> N1;
	if(N1 < esconde){
		cout << "Thanos est� mais a direita";
	}else if(N1 > esconde){
		cout << "Thanos est� mais a esquerda";
	}else if(N1 == esconde){
		cout << "Voc� encontrou thanos!";
		venceu = true;
		break;

	}
	}
	
	
	
	
	if (venceu == false) {
		cout << "\n\n Voc� perdeu! Mais sorte na pr�xima!" << endl;	
	}
	
	cout << " \n\nvoc� quer jogar novamente ? Responda com sim ou n�o sim(1) ou n�o(2): ";
	cin >> N3;
	
	if(N3 == 2){
		fim = true;
	}
	else { 
		cout << " ent�o vamos recomer�ar " << endl << endl;
	}
		
	}
	
//	
//	cout << "Informe o nivel em que quer jogar (1=facil, 2=medio, 3=dificil):";
//	cin >> N2;
//	
//	int tentativas;
//	if (N2 == 1){
//		tentativas = 15;
//	}else if (N2 == 2){
//		tentativas = 10;
//	}else {
//		tentativas = 5;
//	}
//	
//
//	
//	if(N2 == 3)
//	for(x = 0; x < 5; x = x + 1){
//		cout << "\n\nInforme qual arvore quer atacar: ";
//	cin >> N1;
//	if(N1 < esconde){
//		cout << "Thanos est� mais a direita";
//	}else if(N1 > esconde){
//		cout << "Thanos est� mais a esquerda";
//	}else if(N1 == esconde){
//		cout << "Voc� encontrou thanos!";
//		venceu = true;
//		break;
//
//	}
//	}	
//	
//	
//		if(N2 == 2)
//	for(x = 0; x < 10; x = x + 1){
//		cout << "\n\nInforme qual arvore quer atacar: ";
//	cin >> N1;
//	if(N1 < esconde){
//		cout << "Thanos est� mais a direita";
//	}else if(N1 > esconde){
//		cout << "Thanos est� mais a esquerda";
//	}else if(N1 == esconde){
//		cout << "Voc� encontrou thanos!";
//		venceu = true;
//		break;
//
//	}
//	}	
//	
//	
//		if(N2 == 1)
//	for(x = 0; x < 15; x = x + 1){
//		cout << "\n\nInforme qual arvore quer atacar: ";
//	cin >> N1;
//	if(N1 < esconde){
//		cout << "Thanos est� mais a direita";
//	}else if(N1 > esconde){
//		cout << "Thanos est� mais a esquerda";
//	}else if(N1 == esconde){
//		cout << "Voc� encontrou thanos!";
//		venceu = true;
//		break;
//
//	}
//	}
//	
//	
//	
//	
//	if (venceu == false) {
//		cout << "\n\n Voc� perdeu! Mais sorte na pr�xima!" << endl;
//		
//		cout << "\n\n Tentar novamente (1=sim, 2=n�o):"
//		cin >> N3;
//		
//	}if (N3 == 1){
//		
//		
//	}
//	
		
}
