#include<stdio.h>
void doi(int *a, int *b);
int main(){
	int x=10, y=20;
	printf("Truoc khi doi: x=%d, y=%d",x,y);
	doi(&x, &y);
	printf("Sau khi doi: x=%d,y=%d\n",x,y);
	return 0;
	}
void doi(int *a, int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
	}
