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

char ret_array(char* str, char separator)
{
    
    char *word = 0;
    int count = 0;
    // char array[20][100];
    char ** array = malloc(20 * sizeof(char*));
    for (int i =0 ; i < 20; ++i)
        array[i] = malloc(100 * sizeof(char));
    
    word = my_strtok(str,separator);
    while(word)
    {
        int i;
        // printf("%s\n",word);
        for(i = 0; word[i] != '\0'; i++)
        {
            array[count][i] = word[i];
            
        }
        word = my_strtok(NULL,separator);
        count++;
    }
    // printf("%s\n",array[0]);
    return (array);
}

int main() {
    // Write C code here
    char str[100] = "Hello there lil mf";
    char** words = ret_array(str,' ');
    printf("%s\n",words[0]);
    // printtf("%s\n",word);

    return 0;
}
