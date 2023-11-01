#include "main.h"

/**
 * createMarks - function that create mark of student 
 * 
 * no parameter
 * 
 * Return: pointer to one mark
*/
Marks *createMarks()
{
    int coef;
    float mark;
    do {
        coef = getInt("Enter the coefficient of this module: ");
        mark = getFloat("Enter the mark of this module: ");
    } while (coef <= 0 || mark < 0);

    Marks *marks = (Marks *)malloc(sizeof(Marks));
    if (!marks) {
        printf("Error: Memory allocation failed.\n");
        exit(-1);
    }

    marks->coef = coef;
    marks->mark = mark;
    marks->nextMark = NULL;

    return marks;
}
