#include "main.h"

Student* insertEndS(Student *head)
{
    if (head == NULL)
    {
        head = createStudent();
    }
    else
    {
        Student *temp = head;
        while (temp->nextStudent != NULL)
        {
            temp = temp->nextStudent;
        }
        temp->nextStudent = createStudent();
    }

    return head;
}

Student* studentList(Student *head, int numStudents)
{
    Student *newStudent;
    if (head == NULL)
    {
        newStudent = createStudent();
        head = newStudent;
    }
    else
    {
        for (int i = 1; i < numStudents; i++)
        {
            newStudent = insertEndS(newStudent);
        }
    }
    return head;
}
