#include <stdio.h>

int main(void) {
    double r = 4.0;
    double pi = 3.141592;
    double x;
    double a;
    
    scanf("%lf", &x);
    a = 360.0 * x / (r * pi);
    printf("%f\n", a);
    
    return 0;
}
