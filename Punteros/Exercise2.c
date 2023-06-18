//Make: 2.- A function that copies an array to another array
//In Process
#include <stdio.h>

unsigned char arr[] = {10, 22, 33, 41, 15};
unsigned char arr2[5];

void arrayCopy( unsigned char *arrayA, unsigned char *arrayB, unsigned char size );

int main(){
    int size = sizeof(arr) / sizeof(arr[0]);
    arrayCopy(arr,arr2,size);
    unsigned char *puntero3=arr2;
    for (int i = 0; i < size; i++)
    {
        printf("Valor: %u\n", *puntero3);
        puntero3++;
    }
    return 0;
}

void arrayCopy( unsigned char *arrayA, unsigned char *arrayB, unsigned char size ){
    unsigned char *puntero = arrayA;
    unsigned char *puntero2 = arrayB;
    for (int i = 0; i < size; i++)
    {
        *puntero2=*puntero;
        puntero++;
        puntero2++;
    }
}