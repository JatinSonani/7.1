//Q.6 Write a Program to print the below pattern using nested for loop.

//	1 0 1 0 1
//	1 0 1 0
//	1 0 1
//	1 0 
//	1


#include<stdio.h>

main() 
{
    int i, j;

    for (i = 5; i >= 1; i--) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", j % 2);
        }
        printf("\n");
    }

}
