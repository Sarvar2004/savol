#include<stdio.h>

void CHIQAR(int array[],int n){
	for(int i = 0; i<n; i++){
		array[i] /= 5; // array[i] = array[i] / 5;
		printf("%d ",array[i]);
	}
}

int main(){
	int n; // massiv elementlari soni
	scanf("%d",&n);
	int array[n];	// int seriya n ta elementli
	for(int i = 0; i<n; i++){
		scanf("%d",&array[i]); // int seriyani qiymatini to'ldiyapmiz
	}
	CHIQAR(array,n);
}
