#include <stdio.h>

char* my_strtok(char* str, char c)
{
    static char* buffer = NULL;

    if(!buffer)
    {
        buffer = str;
    }
    if(!*buffer)
    {
        return NULL;
    }

    char* token = buffer;

    while(*buffer && *buffer != c)
    {
        buffer += 1;
    }
    if(*buffer)
    {
        *buffer = 0;
        buffer += 1;
    }
    return token;
}

char* word(char* input,char delimeter)
{
	char arr[50][100];
	char *word = my_strtok(input,delimeter);
	int i;
	int j = 0;

	while (word)
	{
		for (i = 0; word[i] != '\0'; i++)
		{
			if (word[i] >= 0)
			{
				arr[j][i] = word[i];
			}
		}
		printf("%s\n",arr[j]);
		word = my_strtok(input,delimeter);
		j++;
	}
	return(arr);
}

int main ()
{
	char input[100] = "Hello there little test friend from Kenya and thank you";
	word(input,' ');
	return (0);
}
