#include "main.h"


ColorCodes colorCode[] = {
    {"black", 0, 1, -1},
    {"brown", 1, 10, 1},
    {"red", 2, 100, 2},
    {"orange", 3, 1000, -1},
    {"yellow", 4, 10000, -1},
    {"green", 5, 100000, 0.5},
    {"blue", 6, 1000000, 0.25},
    {"violet", 7, 10000000, 0.1},
    {"gray", 8, 100000000, 0.05},
    {"white", 9, 1000000000, -1},
    {"gold", -1, 0.1, 5},
    {"silver", -1, 0.01, 10}
};
int color_count = sizeof(colorCode) / sizeof(ColorCodes);







int main()
{
    char band1[10], band2[10], band3[10], band4[10], band5[10];
    printf("Please enter the 5 color codes of the resistor one by one in order:\n");

    printf("Color code for band 1: ");
    scanf("%s", band1);

    printf("Color code for band 2: ");
    scanf("%s", band2);

    printf("Color code for band 3: ");
    scanf("%s", band3);

    printf("Color code for band 4: ");
    scanf("%s", band4);

    printf("Color code for band 5: ");
    scanf("%s", band5);

    double digit1 = get_digit(band1);
    double digit2 = get_digit(band2);
    double digit3 = get_digit(band3);
    double multiplier = get_multiplier(band4);
    double tolerance = get_tolerance(band5);

    if (digit1 == -1 || digit2 == -1 || digit3 == -1 || multiplier == -1)
    {
        printf("An invalid color was inputted\n");
        return -1;
    }

    double significant_digit = (digit1 * 100) + (digit2 * 10) + digit3;
    double resistance = significant_digit * multiplier;
    printf("Resistance: %.2f ohms, Tolerance: ±%.2f%%\n", resistance, tolerance);

    return 0;
}
