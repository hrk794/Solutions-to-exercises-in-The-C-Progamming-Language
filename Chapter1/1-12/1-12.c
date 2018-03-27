/*Write a program that prints its input one word per line.*/

#include <stdio.h>

#define IN 1
#define OUT 0


main() 

{
    int state, c;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            putchar('\n');
        }
        putchar(c);
    }
    
}
