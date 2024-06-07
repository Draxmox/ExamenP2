#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {

    float P1x, p1y, p2x, p2y, p3x, p3y;
    float a, b, c, h1, b1, as;

    printf("Ingrese las coordernadas del punto 1 (x, y)");
    scanf("%f %f", &plx,&ply);

    printf("Ingrese las coordernadas del punto 2 (x, y)");
    scanf("%f %f", &p2x,&p2y);

    printf("Ingrese las coordernadas del punto 3 (x, y)");
    scanf("%f %f", &p3x,&p3y);

    a= sqrt(pow(p1x-p2x, 2) + pow(p1y-p2y, 2));
    b= sqrt(pow(p2x-p1x, 2) + pow(p1y-p2y, 2));
    c= sqrt(pow(p3x-p2x, 2) + pow(p2y-p1y, 2));


            






    return 0;
}