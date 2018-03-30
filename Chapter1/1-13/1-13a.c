/*Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging.*/


/*This one printss a horizontal histogram*/

#include <stdio.h>

main ()

{
    int i, j, max, c;
    int wordlength[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    max = 0;
    
    while((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            ++max;
        }
        else
        {
            if  (0 < max <= 10)
            ++wordlength[max -1];
            max = 0;
            
        }   
    }
    

    for (i = 0; i < 10; ++i )
    {
        printf("%d:\t", (i+1));
        max = wordlength[i];
        for (j = 0; j < max; ++j)
            putchar('#');
        putchar('\n');
    }

}
