#include <stdio.h>

int main(void)
{
    float p, r, t, s;
    printf("Enter the principal : ");
    scanf("%f", &p);
    printf("Enter the rate : ");
    scanf("%f", &r);
    printf("Enter the time : ");
    scanf("%f", &t);
    s = (p * r * t) / 100;
    printf("SI is %f\n", s);

    return 0;
}
