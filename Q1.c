//Q1
/*1. Write a function to calculate the area of a circle. The function returns -1 if the radius is invalid.
(with PI = 3.14159). */
#include<stdio.h>
#define PI 3.14159

double s(double r) {
    if (r <= 0) {
        return -1; // invalid radius
    }
    return PI * r * r;
}

int main() {
    double r;
    printf("enter radius: ");
    scanf("%lf", &r);
    double area = s(r);
    if (area == -1) {
        printf("Invalid radius\n");
    } else {
        printf("Area of circle: %2.f\n", area);
    }
    return 0;
}
