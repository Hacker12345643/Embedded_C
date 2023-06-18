//Make: 5.- Function to sort an array of a given size
#include <stdio.h>

unsigned short arr[] = {10, 22, 33, 41, 15, 55};

void sortArray( unsigned short *array, unsigned char size );

int main(){
    unsigned char size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr,size);
    unsigned short *puntero = arr;
    printf("Números acomodados: \n");
    for (unsigned char i = 0; i < size; i++)
    {
        printf("Sort Num: %hu  \n", *puntero);
        puntero++;
    }
    return 0;
}

void sortArray( unsigned short *array, unsigned char size ){
    unsigned short *puntero = array;
    unsigned short aux;
    printf("Inicie en posición: %hu  \n", puntero);
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (*puntero>*(puntero+1))
            {
                if (j!=(size-i-1))
                {
                    aux=*puntero;
                    *puntero=*(puntero+1);
                    *(puntero+1)=aux;
                }                
            }
            printf("num a acomodar: %hu  \n", *puntero);
            puntero++;
        }
        puntero=puntero-(size-i-1);
        printf("Iniciare en posición: %hu  \n", puntero);
    }
}