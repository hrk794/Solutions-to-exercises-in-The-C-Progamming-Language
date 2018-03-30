/*Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging.*/

/*This one prints a vertical histogram*/


#include <stdio.h>

main ()

{


    int i, j, max_height, max, c = 0;
    int height[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



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
            ++height[max -1];
            max = 0;
            
        }   
    }
    

    
    
    max_height = height[0];
    for (i = 1; i < 10; ++i)

    {
        if (height[i] > max_height)
            max_height = height[i];
    }
    
    for (j = max_height; j > 0; --j)
    {
        for (i = 0; i < 10; ++i)
        {

            if (height[i] >= j)
            {
                putchar('#');
                putchar(' ');
            }
            else
            { 
                putchar(' ');
                putchar(' ');
            }
        }
        putchar('\n');
    }
    printf("1 2 3 4 5 6 7 8 9 10\n");
}
