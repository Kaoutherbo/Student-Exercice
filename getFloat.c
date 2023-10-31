#include "main.h"

/**
 * getFloat - function that get an float
 * 
 * @message: a string message 
 * Return: a float
*/
float getFloat(char *message)
{
    int input;
    printf("%s",message);
    scanf("%f",&input);
    return input;
}