//Código de prueba para trabajar con punteros
#include <stdio.h>

int num=10;
int *puntero=&num;

//puntero tiene la dirección dde memoria donde esta el valor num
//*puntero apunta al valor de num
int main(){
    int valor = *puntero;
    printf("%i",valor);
}