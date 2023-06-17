//Make: 1.- A function that calculates the average of the values in an array
#include <stdio.h>

unsigned char arr[] = {1, 2, 3, 4, 5};

unsigned char average( unsigned char *array, unsigned char size );

int main(){
    int size = sizeof(arr) / sizeof(arr[0]);
    unsigned char valor  = average(arr,size);
    printf("Valor: %u\n", valor);
    return 0;
}

unsigned char average( unsigned char *array, unsigned char size ){
    //printf("Tamaño: %u\n", size);
    unsigned char *puntero = array; // Inicialización de puntero a NULL
    unsigned char sum=0;
    for (int i = 0; i < size; i++)
    {
        //printf("Entero: %u\n", *puntero);
        sum += *puntero;
        puntero++;
    }
    unsigned char average = sum/size;

    return average;
}