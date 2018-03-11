#include <stdio.h>
#include "functions.h"

float average(float a, float b){
	return (a+b)/2;
}

void fibonacci(int num){
	if(num >= 1)printf("%d ", 1);
	if(num >= 2)printf("%d %d ", 1, 1);
	int prev=1, next=1;
	for(int i=3; i<=num; i++){
		printf("%d ", next+prev);
		prev=next;
		next=prev+next;
	}
}

void arrRegroup(int *arr, int capacity){
	int change, j;
	for(int i=0, j = capacity/2; j<capacity; i++, j++){
		change=arr[i];
		arr[i]=arr[j];
		arr[j]=change;
	}
}

int **halfMatrix(int capacity){
	int **matrix = (int*) malloc (capacity*capacity*sizeof(int));
	for(int i=0; i<capacity; i++){
		for(int j=0; j<capacity; j++)
			if(i+j>=capacity)*(matrix+i*capacity+j)=1; else *(matrix + i*capacity + j) =0;
	}
	return matrix;
}
/*
int ** snail(int num){
	int *mat = (int*) malloc (num*num*sizeof(int));
	for(int i=0; i<num; i++)
		for(int j=0; j<num; j++)mat[i][j]=0;
	
	for(int i=0, int j=0, int count=1; count<num*num; count++){
		
	}
}

*/

