//bubble sort 
#include <stdio.h>

void citireArray(int arr[], int n) {
    printf("Introduceti elementele in array:\n");
    for(int i=0; i < n; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}

void afisareArray(int arr[], int n) {
    for(int i=0; i < n; i++) {
        printf("arr[%d]= %d\n", i, arr[i]);
    }
}

void bubbleSort(int arr[], int n) {
    for(int i=0; i < n; i++) {
        for(int j=0; j < n-1; j++) {
            if(arr[j] > arr[j+1]) {
                int swap= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= swap;
            }
        }
    }
}

int main() {
    int arr[100];
    int n;
    
    printf("Cate elemente doriti sa contina array-ul: ");
    scanf("%d", &n);
    
    citireArray(arr, n);
    
    printf("Elemnetele array-ului inainte sa fie sortate:\n");
    afisareArray(arr, n);
    printf("Elemnetele dupa sortare:\n");
    bubbleSort(arr, n);
    afisareArray(arr, n);
    
}
