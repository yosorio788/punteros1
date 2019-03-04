

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
		int a,b,suma;
		int *pa,*pb,*psuma;
	
		cout<<"Digite un numero1 : ";
		cin>>a;
		
		cout<<"Digite un numero 2: ";
		cin>>b;
		
		suma=a+b;
	
	cout<<"la posicion de memoria del # 1 es: "<<&a<<endl;
	cout<<"la posicion de memoria del # 2 es "<<&b<<endl;
	cout<<"la posicion de memoria de la suma es: "<<&suma<<endl;

	return 0;
}
