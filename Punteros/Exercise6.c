//Make: Mandatory: (part of CasioCAN project)
//6.- Function to convert time to a string representation
#include <stdio.h>

void TimeString( char *string, unsigned char hours, unsigned char minutes, unsigned char seconds );

int main(){
    char hora[9];
    unsigned char hours=5;
    unsigned char minutes=30;
    unsigned char seconds=5;
    TimeString(hora,hours,minutes,seconds);
    printf("Tiempo: %s\n", hora);
    return 0;
}
/*
void TimeString( char *string, unsigned char hours, unsigned char minutes, unsigned char seconds ){
    sprintf(string, "%02d:%02d:%02d", hours, minutes, seconds);
}*/

void TimeString( char *string, unsigned char hours, unsigned char minutes, unsigned char seconds ){
    char *punteroString=string;
    if (hours<10)
    {
        *punteroString='0';
        punteroString++;
        *punteroString='0'+(hours);
        punteroString++;
    }
    else {
        *punteroString = '0' + (hours / 10);
        punteroString++;
        *punteroString = '0' + (hours % 10);
        punteroString++;
    }
    *punteroString = ':';
    punteroString++;
    if (minutes<10)
    {
        *punteroString='0';
        punteroString++;
        *punteroString='0'+(minutes);
        punteroString++;
    }
    else {
        *punteroString = '0' + (minutes / 10);
        punteroString++;
        *punteroString = '0' + (minutes % 10);
        punteroString++;
    }

    *punteroString = ':';
    punteroString++;

    if (seconds<10)
    {
        *punteroString='0';
        punteroString++;
        *punteroString='0'+(seconds);
        punteroString++;
    }
    else {
        *punteroString = '0' + (seconds / 10);
        punteroString++;
        *punteroString = '0' + (seconds % 10);
        punteroString++;
    }
    *punteroString='\0';
}