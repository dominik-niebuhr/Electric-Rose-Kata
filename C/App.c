#include <stdio.h>
#include "ElectricRose.h"

int main(int argc, char *argv[])
{
    puts("BZZ ZZZ!");

    Battery batteries[2];
    int last = 0;
    init_battery(batteries + last++, "Samsung Lithium-ion", 0, 20);
    init_battery(batteries + last++, "Budget Nickel Cadmium", 0, 7);

    int times = 2;
    // if (argc > 1) {
    //     times = atoi(argv[1]) + 1;
    // }

    int i;
    int index;
    for (i  = 0; i < times; i ++)
    {
        printf("-------- usage %d --------\n", i);
        printf("type, dry, charge\n");
        for(index = 0; index < last; index++) {
            print_battery(batteries + index);
        }
        printf("\n");
        update_charge(batteries, last);
    }
    return 0;
}
