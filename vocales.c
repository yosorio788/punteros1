/*Crear un programa con punteros que permita leer la cantidad de vocales ingresados
en una cadena y luego imprima el total discriminado por vocales*/

#include<stdio.h>
#include<stdlib.h>

int vocalA(char *);
int vocalE(char *);
int vocalI(char *);
int vocalO(char *);
int vocalU(char *);

int main(){
	char vocales[50];
	
	printf("INGRESAR LA PALABRA: ");
	gets(vocales);
	
	printf("\nLA VOCAL A APARECE : %i veces",vocalA(vocales));
	printf("\nLA VOCAL E APARECE : %i veces",vocalE(vocales));
	printf("\nLA VOCAL I APARECE : %i veces",vocalI(vocales));
	printf("\nLA VOCAL O APARECE : %i veces",vocalO(vocales));
	printf("\nLA VOCAL U APARECE : %i veces",vocalU(vocales));

	return 0;
}
int vocalA(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'a': cont++;
		}
		s++;	
	}
	return cont;
}
int vocalE(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'e': cont++;
		}
		s++;	
	}
	return cont;
}
int vocalI(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'i': cont++;
		}
		s++;	
	}
	return cont;
}
int vocalO(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'o': cont++;
		}
		s++;	
	}
	return cont;
}
int vocalU(char *s){
	int cont=0;
	while(*s){
		switch(*s){
			case 'u': cont++;
		}
		s++;	
	}
	return cont;
}
