#include <stdio.h>

int in_celsius(int m);

int main()

{

    int fahr = 0;

    int lower, upper, step;

    lower = 0;

    upper = 300;

    step = 20;

    while (fahr <= upper)

        {
            printf("%d\t%d\n", fahr, in_celsius(fahr));
            fahr = fahr + step;
        }

}


int in_celsius(int fahren)

{

    int converted;
    converted =  5 * (fahren -32) / 9;
    return converted;

}
