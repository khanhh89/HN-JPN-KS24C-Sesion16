#include<stdio.h>
void printArr(int *arr,int size);
int main(){
	int arr[]={1,6,9,6,3,0,1,4,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	printArr(arr,size);
	return 0;
	}
void printArr(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("%d",*(arr+i));
		}
		printf("\n");
	}
