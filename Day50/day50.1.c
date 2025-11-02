//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main() {
    char date[11]; 
    char newDate[12]; 

    printf("Enter date in dd/04/yyyy format: ");
    gets(date);

    
    newDate[0] = date[0];
    newDate[1] = date[1];
    newDate[2] = '-';
    newDate[3] = 'A';
    newDate[4] = 'p';
    newDate[5] = 'r';
    newDate[6] = '-';
    newDate[7] = date[6];
    newDate[8] = date[7];
    newDate[9] = date[8];
    newDate[10] = date[9];
    newDate[11] = '\0'; 

    printf("Date in dd-Apr-yyyy format: %s\n", newDate);
    return 0;
}