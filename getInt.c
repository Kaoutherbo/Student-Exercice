#include "main.h"

/**
 * getInt - function that get an integer
 * 
 * @message: a string message 
 * Return: an integer
*/
int getInt(char *message)
{
    int num;
    printf("%s", message);
    scanf("%d", &num);
    return num;
}