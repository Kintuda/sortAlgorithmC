#include <stdio.h>
#include <stdlib.h>


void trocaPosicoes (int *valor1, int * valor2){
	int aux;
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
}

void bubbleSort(int *array, int max){
 for(int i = 0;i < max -1 ;i++){
 	for(int j = 0; j < max-1-i; j++){
		if (array[j] < array[j+1]){
			trocaPosicoes(&array[j],&array[j+1]);				
		}
	}
  }
}

void imprimirArray(int *array, int max){
	for(int i = 0; i < max;i++){
		printf("Posicao: %d  Valor: %d \n",i,array[i]);
	}
}

int main(){
	int array[5] = {10,54,1,76,3};
	bubbleSort(array,5);
	imprimirArray(array,5);
}
