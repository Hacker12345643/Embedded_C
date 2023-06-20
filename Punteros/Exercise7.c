// Make: Mandatory: (part of CasioCAN project)
// 7.- Function to convert date to a string representation
#include <stdio.h>

void DateString(char *string, unsigned char month, unsigned char day, unsigned short year, unsigned char weekday);

int main()
{
    char fecha[16]; // “Mon dd, yyyy Dy“
    unsigned char month = 12;
    unsigned char day = 30;
    unsigned short year = 2065;
    unsigned char weekday = 5;
    DateString(fecha, month, day, year, weekday);
    printf("Fecha: %s\n", fecha);
    return 0;
}

void DateString(char *string, unsigned char month, unsigned char day, unsigned short year, unsigned char weekday)
{
    char *punteroString = string;

    switch (month)
    {
    case 1:
        *punteroString = 'E';
        punteroString++;
        *punteroString = 'n';
        punteroString++;
        *punteroString = 'e';
        punteroString++;
        break;
    case 2:
        *punteroString = 'F';
        punteroString++;
        *punteroString = 'e';
        punteroString++;
        *punteroString = 'b';
        punteroString++;
        break;
    case 3:
        *punteroString = 'M';
        punteroString++;
        *punteroString = 'a';
        punteroString++;
        *punteroString = 'r';
        punteroString++;
        break;
    case 4:
        *punteroString = 'A';
        punteroString++;
        *punteroString = 'b';
        punteroString++;
        *punteroString = 'r';
        punteroString++;
        break;
    case 5:
        *punteroString = 'M';
        punteroString++;
        *punteroString = 'a';
        punteroString++;
        *punteroString = 'y';
        punteroString++;
        break;
    case 6:
        *punteroString = 'J';
        punteroString++;
        *punteroString = 'u';
        punteroString++;
        *punteroString = 'n';
        punteroString++;
        break;
    case 7:
        *punteroString = 'J';
        punteroString++;
        *punteroString = 'u';
        punteroString++;
        *punteroString = 'l';
        punteroString++;
        break;
    case 8:
        *punteroString = 'A';
        punteroString++;
        *punteroString = 'g';
        punteroString++;
        *punteroString = 'o';
        punteroString++;
        break;
    case 9:
        *punteroString = 'S';
        punteroString++;
        *punteroString = 'e';
        punteroString++;
        *punteroString = 'p';
        punteroString++;
        break;
    case 10:
        *punteroString = 'O';
        punteroString++;
        *punteroString = 'c';
        punteroString++;
        *punteroString = 't';
        punteroString++;
        break;
    case 11:
        *punteroString = 'N';
        punteroString++;
        *punteroString = 'o';
        punteroString++;
        *punteroString = 'v';
        punteroString++;
        break;
    case 12:
        *punteroString = 'D';
        punteroString++;
        *punteroString = 'i';
        punteroString++;
        *punteroString = 'c';
        punteroString++;
        break;
    default:
        break;
    }
    *punteroString = ' ';
    punteroString++;
    if (day < 10)
    {
        *punteroString = '0';
        punteroString++;
        *punteroString = '0' + (day);
        punteroString++;
    } 
    else
    {
        *punteroString = '0' + (day / 10);
        punteroString++;
        *punteroString = '0' + (day % 10);
        punteroString++;
    }
    *punteroString = ',';
    punteroString++;
    *punteroString = ' ';
    punteroString++;
    //concat year
    *punteroString = '0' + (year / 1000);
    punteroString++;
    *punteroString = '0' + (year % 1000)/100;
    punteroString++;
    *punteroString = '0' + (year % 100)/10;
    punteroString++;
    *punteroString = '0' + (year % 10);
    punteroString++;
    *punteroString = ' ';
    punteroString++;
    //add Day
    switch (weekday)
    {
    case 1:
        *punteroString = 'L';
        punteroString++;
        *punteroString = 'u';
        punteroString++;
        break;
    case 2:
        *punteroString = 'M';
        punteroString++;
        *punteroString = 'a';
        punteroString++;
        break;
    case 3:
        *punteroString = 'M';
        punteroString++;
        *punteroString = 'i';
        punteroString++;
        break;
    case 4:
        *punteroString = 'J';
        punteroString++;
        *punteroString = 'u';
        punteroString++;
        break;
    case 5:
        *punteroString = 'V';
        punteroString++;
        *punteroString = 'i';
        punteroString++;
        break;
    case 6:
        *punteroString = 'S';
        punteroString++;
        *punteroString = 'a';
        punteroString++;
        break;
    case 7:
        *punteroString = 'D';
        punteroString++;
        *punteroString = 'o';
        punteroString++;
        break;
    default:
        break;
    }
  
    *punteroString = '\0';
}