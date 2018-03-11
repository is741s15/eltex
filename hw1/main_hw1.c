#include <stdio.h>
#include "functions.h"

int main(){
	float a, b;
	scanf_s("%f %f", &a, &b);
	printf("average = %f", average(a,b));
	printf("\n");
	
	int f;
	scanf_s("%d", &f);
	fibonacci(f);
	printf("\n");
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	arrRegroup(arr, 10);
	for(int i=0; i<10; i++)printf("%d ", arr[i]);
	printf("\n");
	
	
	int **matrix = halfMatrix(10);
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++)printf("%d ", *(matrix + i*10 + j));
		printf("\n");
	}
	
	_getch();
}