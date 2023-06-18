//Make: 3.- Function to compare two arrays
//In Process
#include <stdio.h>

unsigned char arr[] = {10, 22, 33, 41, 15};
unsigned char arr2[]={10, 22, 33, 41, 156};

unsigned char arrayCompare( unsigned char *arrayA, unsigned char *arrayB, unsigned char size );

int main(){
    unsigned char size = sizeof(arr) / sizeof(arr[0]);
    unsigned char isEqual;
    isEqual = arrayCompare(arr,arr2,size);
    if(isEqual==0){
        printf("These array are Equal");
    }
    else{
        printf("Those array are Diferent");
    }
    return 0;
}

unsigned char arrayCompare( unsigned char *arrayA, unsigned char *arrayB, unsigned char size ){
    unsigned char *puntero = arrayA;
    unsigned char *puntero2 = arrayB;
    unsigned char result;
    for (int i = 0; i < size; i++)
    {
        if (*puntero2==*puntero)
        {
            result=0;
        }
        else if (*puntero2!=*puntero)
        {
            result=1;
            break;
        }
        puntero++;
        puntero2++;
    }
    return result;
}