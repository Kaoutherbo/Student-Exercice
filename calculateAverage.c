#include "main.h"

float calculateAverage(Marks *head)
{
    float average = 0, sumMarks = 0;
    int sumCoef = 0;
    Marks *module = head;
    while (module != NULL)
    {
        sumMarks += (module->mark) * (module->coef);
        sumCoef += module->coef;
        module = module->nextMark;
    }
    average = (float)(sumMarks / sumCoef);
    return average;
}