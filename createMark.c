#include "main.h"

Marks* createMarks(int numMarks)
{
    int coef;
    float mark;
    do{
        coef = getInt("Enter the coef of the module number 1 : ");
        mark = getFloat("Enter the mark of the module number 1 : ");
    }while(coef <= 0 || mark < 0);

    Marks *marks = (Marks*)malloc(sizeof(Marks));
    if(!marks)
    {
        printf("\nError: Memory allocation failed.\n");
        exit(-1);
    }

    marks->coef = coef;
    marks->mark = mark;
    marks->nextMark = NULL;
    
    return marks;
}