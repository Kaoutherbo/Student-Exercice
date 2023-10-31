#include "main.h"

Student* insertEnd(Student *head)
{   
    if(head == NULL)
    {
        head = createStudent();
    }
    else
    {
        Student *temp = head;
        while(temp->nextStudent != NULL)
        {
            temp = temp->nextStudent;
        }
        temp->nextStudent = createStudent();
    }
  
    return head;
}

Student* studentList(Student *head, int numStudent)
{
    Student *newStudent;
    if(head == NULL)
    {
        newStudent = createStudent();
        head = newStudent;
    }
    else
    {
        for(int i = 1; i < numStudent; i++)
        {
            newStudent = insertEnd(newStudent);
        }
    }
    return head;
}