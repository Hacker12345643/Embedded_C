/*Escribir una pieza reusable de cogido que permita mediante funciones la manipulación de bits en variables de 8 bits, para poder realizar
las siguientes funciones es necesario entender bien los operadores de corrimiento << y >>, ademas de los operadores binarios and ( & ),
or ( | ), xor ( ^ ) y not ( ~ )*/

#include <stdio.h>      //Inputs y outputs

void printb( unsigned char byte );
unsigned char ClearBitMask( unsigned char byte, unsigned char mask );

int main(){
    unsigned char var = 0x0f;
    var = ClearBitMask( var, 0x0A );
    printb( var ); //expected value 0000 0101
    return 0;
}

//4.- Funcion que coloca en cero los bits de una variable acorde a la mascara
unsigned char ClearBitMask( unsigned char byte, unsigned char mask ){
    unsigned char result = byte&(~mask);
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
}