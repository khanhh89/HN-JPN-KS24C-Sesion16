#include<stdio.h>
void updateElement(int *arr, int size, int newValue,int position);
void printArr(int *arr, int size);
int main(){
	int arr[]={5,6,9,6,3,2,1,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Mang ban dau: ");
	printArr(arr,size);
	int newValue = 10;
	int position = 2;
	updateElement(arr,size, newValue,position);
	printf("Mang sau khi cap nhat: ");
	printArr(arr,size);
	return 0;
}
void updateElement(int *arr, int size, int newValue,int position){
	if(position<0||position>=size){
	printf("Vi tri khong hop le.\n");
	return;
	}
	*(arr+position)=newValue;	
}
void printArr(int *arr, int size){
	for(int i=0;i<size;i++){
		printf("%d",*(arr+i));
		}
		printf("\n");
	}
