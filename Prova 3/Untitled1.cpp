#include <bits/stdc++.h>

using namespace std;

main(){
	map <string, string> nomes;
	map <string, string>::iterator iter;
	
	string nome, sobrenome;
	int op;
	
	do{
		cout << "1- Inserir\n2- Consultar\n3- Listar todos\n4- Sair\n";
		cin >> op;
		switch(op){
		case 1:
			cout << "Nome: " ;
			cin >> nome;
			cout << "Sobrenome: ";
			cin >> sobrenome;
			nomes.insert(pair<string, string>(nome, sobrenome));
			break;
		case 2:
			cout << "Sobrenome a ser buscado: ";
			cin >> sobrenome;
			cout << "Filhos da Familia: " << sobrenome << endl;
			for(iter = nomes.begin(); iter != nomes.end(); iter++){
				if(sobrenome == iter->second)
					cout << iter->first << endl;
			}
			break;
		case 3:
			cout << "Todos da lista: " << endl;
			for(iter = nomes.begin(); iter != nomes.end(); iter++){
				cout << iter-> first << " " << iter->second << endl;	
			}
			break;
		case 4:
			break;
		default:
			cout << "Ops! Esse comando eh invalido";
			
		}	
	}while(op != 4);
	return 0;
}
