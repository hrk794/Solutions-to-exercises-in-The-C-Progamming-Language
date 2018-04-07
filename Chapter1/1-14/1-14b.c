/*Write a program to print a histogram of the frequencies of different characters in its input.*/

#include <stdio.h>

main()

{
	int c, max_height, j, i = 0;
	int freq[26] = {0};
	
	while ((c = getchar()) != EOF)
	{
		if ( 'A' <= c <= 'Z' )
		{
			++freq[ c - 'A' ];
			
		}
		if ( 'a' <= c <= 'z')
		{
			++freq[ c - 'a' ];
		
		}

	}
	
	max_height = freq[0];
	for (i = 1; i < 26; ++i)

	{
		if (freq[i] > max_height)
		max_height = freq[i];
	}
    
	for (j = max_height; j > 0; --j)
	{
		printf("%d\t", j);
		for (i = 0; i < 10; ++i)
			{

				if (freq[i] >= j)
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
	printf("\ta b c d e f g h i j k l m n o p q r s t u v w x y z\n");
	
}