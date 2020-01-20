#include <string.h>
#include <stdio.h>
#include "ElectricRose.h"
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

Battery* init_battery(Battery* battery, const char *type, int dry, double charge)
{
    battery->dry = dry;
    battery->charge = charge;
    battery->type = strdup(type);
    return battery;
}

int print_battery(Battery *battery)
{
    return printf("%s, %d, %.1f\n", battery->type, battery->dry, battery->charge);
}

void update_charge(Battery batteries[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (batteries[i].charge >= 0.1) {
            batteries[i].charge = MAX(0, batteries[i].charge - 0.1);
        }

        if (batteries[i].dry) {
            if (batteries[i].charge >= 0.1) {
                batteries[i].charge = MAX(0, batteries[i].charge - 0.1);
            }
        }
    }
}
