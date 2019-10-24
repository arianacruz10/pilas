#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo {
	int valor;
	Nodo *siguiente;

};
//FUNCIONES DEL MENU
void insertarpila(Nodo *&pila,int );
void imprimirpila2(Nodo*&,int &);
//MENU
int main (){
	int valor;
	int opcion,numero,numero2;
	Nodo*pila;
	pila=NULL;
	do{
		cout<<":::MENU PILAS:::"<<endl;
		cout<<"Elija una opcion: "<<endl;
		cout<<"1.-ingresar datos: "<<endl;
		cout<<"2.- imprimir datos: "<<endl;	
		cout<<"3.- Salir "<<endl;
		cin>>opcion;

		switch(opcion){
			case 1:
				cout<<" ingrese cuantos datos desea agregar a la pila: "; //PEDIR DATOS AL USUARIO
				cin>>numero;
				for(int i=1; i<=numero; i++){
				cout<<"inserte el valor del dato : ";
				cin>>numero2;	
				insertarpila(pila,valor);
			}break;
			case 2:
				cout<<"Datos de las lista: ";
				imprimirpila2(pila,numero);
				if (pila!=NULL){
					cout<<valor<<",";
				}
				else{
					cout<<valor<<".";
				}
				cout<<endl;
			break;
			case 3:
				cout<<"cancelado..."<<endl;
			break;			
		}					
	}while(opcion!=3);
	return 0;
	}
	//IMPRIMIR LOS VALORES INSERTADOS POR EL USUARIO
void imprimirpila2(Nodo *&pila,int &numero){
	Nodo *aux=pila;
	numero=aux->valor;
	pila=aux->siguiente;
	delete aux; 

}

 void insertarpila(Nodo *&pila,int numero){
	Nodo *nodonuevo=new Nodo();
	nodonuevo->valor=numero;
	nodonuevo->siguiente=pila;
	pila=nodonuevo;
}
