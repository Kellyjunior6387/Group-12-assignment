#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*struct ColorCodes - Structure to store color codes
*@color: color of the resistor
*@digit: value when in first 3 bands
*@multiplier: value of the multiplier
@tolerance: value of the tolerance
 */
typedef struct {
    char color[10];
    double digit;
    double multiplier;
    double tolerance;
}ColorCodes;

double get_digit(const char *c);
double get_tolerance(const char *c);
double get_mutlipler(const char *c);

#endif