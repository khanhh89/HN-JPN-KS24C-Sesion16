#include<stdio.h>
void BT(int a, int b, int *ketQua); 
int main() {
    int number1 = 100, number2 = 900;
    int ketQua;
    BT(number1, number2, &ketQua);
    printf("Tong 2 so la: %d\n", ketQua);
    return 0;
}
void BT(int a, int b, int *ketQua){
    *ketQua = a + b;
    }
