//1.- Funcion que rota a la derecha los bits de una variable

#include <stdio.h>

void printb( unsigned char byte );

unsigned char ShiftBitLeft( unsigned char byte, unsigned char shift );

unsigned char len=8;        //Habilitado solo para 8 bits

int main() {
    unsigned char var = 0xf0;
    var = ShiftBitLeft( var, 1 );
    //var = Recorrer1Pos(var);
    printb( var ); //expected value 1111 0000
    return 0;
}

//2.- Funcion que rota a la Izquierda los bits de una variable
unsigned char ShiftBitLeft( unsigned char byte, unsigned char shift ){
    //Lo que se debe hacer es invertir el binario que se tiene, es decir si se tiene un 1, convertirlo en 0 y viceversa
    //Comprobar que esté en el rango de 0 a 7
    unsigned char result=0;
    if (shift>=0 && shift<len)
    {
        result = (byte<<shift)|(byte>>(len-shift));
    }
    else{
        printf("Rotación fuera de rango \n");
        result=byte;
    }
    return result;
}

//0.- Funcion que permita imprimir en formato binario el valor de una variable de 8 bits
void printb( unsigned char byte ){
    int i;
    //Empieza en 7 para que se escriba de principio de cadena a final, el primer bit es 0 (00000001), el ultimo es 7 (10000000)
    for (i = 7; i >= 0; i--)        //7 por que son 8 bits, y empezamos por la posición 7
    {
        //Se necesita comparar bit con bit si son iguales por lo que se hace de la siguiente forma
        if(byte & (1<<i) ){     //El operador & compara los bits correspondientes de los operandos y produce un resultado que tiene un 1 en los bits donde ambos operandos tienen 1.
            printf("1");
        }
        else{
            printf("0");            //Si no está activado el bit, entonces imprime un 0
        }
    }
    printf("\n");
} 