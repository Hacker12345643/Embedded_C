
int num=10;
int *puntero; // Inicialización de puntero a NULL

//puntero tiene la dirección dde memoria donde esta el valor num
//*puntero apunta al valor de num
int main(){
    puntero = &num; // Asignación de una nueva dirección de memoria al puntero
    puntero++; // Avance del puntero a la siguiente dirección de memoria
    printf("%#04x \n",puntero);
    printf("%i",*puntero);
}