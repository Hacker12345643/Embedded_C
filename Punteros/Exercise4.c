//Make: 4.- Function to get the largest number in a given array
//In Process
#include <stdio.h>

unsigned short arr[] = {10, 22, 33, 41, 15};
unsigned short largest( unsigned short *array, unsigned char size );

int main(){
    unsigned char size = sizeof(arr) / sizeof(arr[0]);
    unsigned short largestNum;
    largestNum = largest(arr,size);
    printf("Largest Num: %hu\n", largestNum);
    
    return 0;
}

unsigned short largest( unsigned short *array, unsigned char size ){
    unsigned short *puntero = array;
    unsigned short result=0;
    for (int i = 0; i < size; i++)
    {
        if (*puntero>result)
        {
            result=*puntero;
        }
        puntero++;
    }
    return result;
}