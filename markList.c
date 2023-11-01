#include "main.h"

/**
 * markList - this function create a list of marks 
 * 
 * @head: pointer to first mark
 * @numMarks: number of marks of the list
 *
 * Return: pointer to list of marks
*/

Marks *markList(Marks *head, int numMarks)
{
    Marks *newMark;
    Marks *currentMark = head;
    
for (int i = 0; i < numMarks; i++)
    {
        newMark = createMarks();
        
        if (head == NULL)
        {
            head = newMark;
            currentMark = head;
        }
        else
        {
            currentMark->nextMark = newMark;
            currentMark = newMark;
        }
    }
    return head;
}