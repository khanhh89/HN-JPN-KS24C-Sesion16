#include<stdio.h>
int main(){
	int x=5;
	int *ptr = &x;
	printf("Gia tri x cua con tro: %d\n",x);
	printf("Dia chi x cua con tro: %p\n",&x);
	printf("Gia tri x cua con tro: %d\n",*ptr);
	printf("Dia chi x cua con tro: %p\n",ptr);	
	return 0;
}
