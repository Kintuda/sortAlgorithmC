#include<stdio.h>
#include<stdlib.h>


void trocaPosicao(int *valor1,int *valor2){	
	int temp;
	temp = *valor1;
	*valor1 = *valor2;
	*valor2 = temp;
}

void selectionSort(int *array, int max){
	for(int i = 0;i < max -1; i++){
		int indexInicial = i;
		for(int j = i+1; j < max;j++){
			if(array[j] >  array[indexInicial]){
				indexInicial = j;
			}
		}
			if (indexInicial != i){			
				trocaPosicao(&array[indexInicial],&array[i]);
			}
	}
}

void imprime(int *array,int max){
	for(int i = 0;i < max;i++){
	printf("Valor %d: %d \n",i,array[i]);
	}
}
int main(){
	int array[5] = {10,1,6,20,5};
	selectionSort(array,5);
	imprime(array,5);
}

