/*Diseñe un programa, que sume dos variables de tipo entero, 
por medio de apuntadores, debe mostrar el resultado 
y la dirección de memoria de 
cada uno de los valores incluido el resultado.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num1,num2,sum;
	int *p_num1, *p_num2, *p_suma;
	
	printf("INGRESE EL PRIMER NUMERO: \n");
	scanf("%d",&num1);
	
	printf("INGRESE EL SEGUNDO NUMERO: \n");
	scanf("%d",&num2);
	
		sum= num1+num2;
	
	printf("LA SUMA DE LAS DOS VARIABLES ES: %d \n",sum);

		p_num1=&num1;
		p_num2=&num2;
	
	printf("SUMA DE LOS DOS PUNTEROS%d\n",*p_num1+*p_num2);
	
		p_suma =&sum;
	
	printf("LA DIRECCION DE MEMORIA DEL PRIMER NUMERO :%p\n",p_num1);
	printf("LA DIRECCION DE MEMORIA DEL SEGUNDO NUMERO:%p\n",p_num2);
	printf("LA POSICION DE LA SUMA ES:%p\n\n",p_suma);
	
	return 0;
}
