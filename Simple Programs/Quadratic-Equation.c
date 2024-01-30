#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
    double a, b, c;
    printf("Enter coefficients (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double discriminant = b * b - 4 * a * c;
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots: %.2lf and %.2lf\n", root1, root2);
        getch();
}