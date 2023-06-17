//Array Example
#include <stdio.h>

int arr[] = {1, 2, 3, 4, 5};
int *puntero = arr; // Inicialización de puntero a NULL

//puntero tiene la dirección dde memoria donde esta el valor num
//*puntero apunta al valor de num
int main(){
    printf("%#04x \n",puntero);
    printf("%i \n",*puntero);
    puntero++; // Avanza al siguiente elemento (puntero apunta a arr[1])
    printf("%#04x \n",puntero);
    printf("%i \n",*puntero);
    puntero++; // Retrocede al elemento anterior (puntero apunta a arr[0])
    printf("%#04x \n",puntero);
    printf("%i \n",*puntero);    
}