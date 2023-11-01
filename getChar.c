#include "main.h"

/**
 * getChar - function that get a string
 * 
 * @message: a string message 
 * Return: a string
*/
char* getChar(char *message)
{
    char *input = (char *)malloc(100); // Allocate memory for input
    if (input == NULL) {
        printf("Memory allocation failed.\n");
        exit(-1);
    }

    printf("%s", message);
    scanf("%s", input);
    return input;
}