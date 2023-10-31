#include "main.h"

Marks* insertEndM(Marks *head)
{   
    if(head == NULL)
    {
        head = createStudent();
    }
    else
    {
        Marks *temp = head;
        while(temp->nextMark != NULL)
        {
            temp = temp->nextMark;
        }
        temp->nextMark = createStudent();
    }
  
    return head;
}
Marks* markList(Marks *head, int numMarks)
{
    Marks *newMark;
    if(head == NULL)
    {
        newMark = createMarks();
        head = newMark;
    }
    else
    {
        for(int i = 1; i < numMarks; i++)
        {
            newMark = insertEndM(newMark);
        }
    }
    return head;
}