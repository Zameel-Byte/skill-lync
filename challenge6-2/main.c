/*

* challenge6-2.c

*

* Created on: Feb 14, 2023

* Author: zameel

*/
#include <stdio.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("%lf + %lf = %lf\n", a, b, add(a, b));
    printf("%lf - %lf = %lf\n", a, b, subtract(a, b));
    printf("%lf * %lf = %lf\n", a, b, multiply(a, b));
    printf("%lf / %lf = %lf\n", a, b, divide(a, b));
    return 0;
}
