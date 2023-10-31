#include "main.h"

int getInt(char *message)
{
    int num;
    printf("%s",message);
    scanf("%d",&num);
    return num;
}