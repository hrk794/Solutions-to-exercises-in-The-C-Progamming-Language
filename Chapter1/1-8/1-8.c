/*Write a program to count blanks, tabs, and newlines.*/

#include<stdio.h>

main()

{
    int c, nl;
    nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++nl;
        if (c == '\t')
            ++nl;
    }
    printf("%d\n", nl);

}

