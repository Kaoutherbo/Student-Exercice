#include "main.h"

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