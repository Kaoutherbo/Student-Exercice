#include "main.h"

float calculateAverage(Marks *head)
{
    float average = 0, sumMarks = 0;
    int  sumMcoef = 0;
    Marks *module = head;
    while (module != NULL)
    {
        sumMarks += (module->mark) * (module->coef);
        sumMcoef += module->coef;
        module = module->nextMark;
    }
    average = (float)(sumMarks / sumMcoef);
    return average;
}