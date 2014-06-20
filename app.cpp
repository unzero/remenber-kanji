/*
*HEADERS FOR THE APP
*/
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

/*
*CUSTOM CLASS
*/

#include "Connection.h"


/**
*METODO PRINCIPAL
*/
int main(int argc,char *argv[]){
	cout<<"Bienvenido al programa, el siguiente busca ayudar en el estudio de los kanjis"<<endl;
	Connection conex("ok");
	if(conex.connect()){	
		cout<<"OK"<<endl;
	}
	return 0;		
}	
