#include "main.h"
/**
 * get_tolerance - Function to return the value of a color
 * @color: Color whose value is to be returned
 * Return: Value of color otherwise 1
 */
double get_tolerance(const char *color)
{
    for (int i = 0; i < color_count; i++)
    {
        if (strcmp(color, colorCode[i].color) == 0){
            return colorCode[i].tolerance;
        }
    }
    return 20;
}
