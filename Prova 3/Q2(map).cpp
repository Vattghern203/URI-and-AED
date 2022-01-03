#include <bits/stdc++.h>

using namespace std;

main(){
	
	map <char, char> letras;
	map <string, string>::iterator iter;
	
	char normal[20], crip[20];
	
	cout << "Digite a frase: " << endl;
	cin >> normal;
	
	strcpy(crip, normal);
	
	letras.insert(pair<string, string>(normal, crip));
	
	letras['a']='!';
    letras['e']='@';
    letras['i']='#';
    letras['o']='$';
    letras['u']='%';
    
    cout << "Frase final" << endl;
			for(iter = letras.begin(); iter != letras.end(); iter++){
				cout << iter-> first << " " << iter->second << endl;	
			}
			
	return 0;
}
