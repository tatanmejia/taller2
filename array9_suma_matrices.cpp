#include <stdio.h>
#include <stdlib.h>


int main(void){
	int i;
	int *matrix_a;
	int *matrix_b;
	int result;


	/*
	* size = numero máximo de int que admite block
	*/
	for(i = 0 ; i < size; i++){
		i%2 ? (*matrix_a++=1)  : (*matrix_b++=2) ;
	}
	matrix_a =(int*)block;
	matrix_b =(int*)block+size/2;

	/*
	*size/2 es el número de elementos que contiene cada
	*matriz. El resultado tiene que ser 3 y coincidir con
	*size/2 en el número de elementos.
	*/
	for(i = 0 ; i < size/2; i++){
		 result = *matrix_a+++ *matrix_b++;
		  printf("%d-",result);
	}

	 free(block);
	return 0;
}
