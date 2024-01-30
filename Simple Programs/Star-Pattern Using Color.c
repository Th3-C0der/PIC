//Star Pattern By Th3C0der
#include <stdio.h>
#define Color   "\x1B[32m"
#define Reset   "\x1B[0m"
int main() 
{ 
int rows, i , j ,k, l;
printf("Type Rows Of The Start Pattern:\n");
scanf("%d", &rows);
    for ( i = 0; i < rows; i++) { 
        for ( j = 0; j < i ; j++) { 
            printf(" "); 
        } 
        for (k = 0; k < j ; k++) {
        printf(Color "* "); 
        }
        printf(Reset"\n"); 
    } 
    return 0; 
}