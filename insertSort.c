#include<stdio.h>
#include<stdlib.h>


void insertSort(int *array, int max){
	for(int i = 0;i < max;i++){
		int valorInicial = array[i];
		int posicao = i-1;
		while(posicao >= 0 && array[posicao] > valorInicial){
			array[posicao+1] = array[posicao];
			--posicao;
		} 
		array[posicao+1] = valorInicial;
	}
}

void imprime(int *array, int max){
	for(int i = 0;i < max; i++){
		printf("Valor %d: %d \n",i,array[i]);
	}
}
int main(){	
	int array[5] = {10,20,9,65,1};
	insertSort(array,5);
	imprime(array,5);
}
