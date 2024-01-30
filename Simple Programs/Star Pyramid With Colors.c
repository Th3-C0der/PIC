//Star Pattern By Th3Coder
#include <stdio.h>
#define Color   "\x1B[32m"
#define Reset   "\x1B[0m"
int main() 
{ 
int rows, i , j ,k;
printf("Type Rows Of The Start Pattern:\n");
scanf("%d", &rows);
    for ( i = 0; i < rows; i++) { 
        for ( j = 0; j < 2 * (rows- i) - 1; j++) { 
            printf(" "); 
        } 
        for (k = 0; k < 2 * i + 1; k++) { 
            printf(Color "* "); 
        } 
        printf(Reset"\n"); 
    } 
    return 0; 
}