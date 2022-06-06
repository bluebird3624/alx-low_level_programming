#include <stdio.h>

/**
 * main - entry point
 * description: the program prints all possibel two digit number combinations
 * Return: 0
 * 
 */

int main(void)
{
    int num1,num2,num3,num4;

    for(num1 = 48; num1 <= 57; num1++)
    {
        for(num2 = 48; num2 <= 57; num2++)
        {
            

            for(num3 = 48; num3 <= 57; num3++)
            {
                for(num4 = 48; num4 <= 57; num4++)
                {
                    if (num1 == num3 && num2 == num4)
                    {
                        continue;
                    }
                    putchar(num1);
                    putchar(num2);
                    putchar(' ');
                    putchar(num3);
                    putchar(num4);
                    putchar(',');
                }
            }

        }
    }

    
    return (0);
}
