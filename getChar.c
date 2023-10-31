#include "main.h"

/**
 * getChar - function that get a string
 * 
 * @message: a string message 
 * Return: a string
*/
char* getChar(char *message)
{
    int input;
    printf("%s",message);
    scanf("%s",&input);
    return input;
}