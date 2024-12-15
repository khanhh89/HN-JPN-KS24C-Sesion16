#include<stdio.h>
int search(int arr[], int size, int value); 
int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int value = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = search(arr, size, value);

    if(result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", value, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", value);
    }
    
    return 0;
}
int search(int arr[], int size, int value){
    for(int i = 0; i < size; i++) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;
}

