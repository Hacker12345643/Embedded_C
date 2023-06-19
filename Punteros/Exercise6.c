//Make: Mandatory: (part of CasioCAN project)
//6.- Function to convert time to a string representation
#include <stdio.h>

void TimeString( char *string, unsigned char hours, unsigned char minutes, unsigned char seconds );

int main(){
    char hora[9];
    unsigned char hours=15;
    unsigned char minutes=30;
    unsigned char seconds=0;
    TimeString(hora,hours,minutes,seconds);
    printf("Tiempo: %s\n", hora);
    return 0;
}

void TimeString( char *string, unsigned char hours, unsigned char minutes, unsigned char seconds ){
    sprintf(string, "%02d:%02d:%02d", hours, minutes, seconds);
}