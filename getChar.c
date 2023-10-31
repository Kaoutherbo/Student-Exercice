#include "main.h"

/**
 * getChar - function that get a string
 * 
 * @message: a string message 
 * Return: a string
*/
char* getChar(char *message)
{
    char* input;
    printf("%s",message);
    scanf("%s",&input);
    return input;
}