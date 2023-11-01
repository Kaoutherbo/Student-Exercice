#include "main.h"


Student *studentList(Student *head, int numStudents)
{
    Student *newStudent;
    Student *currentStudent = head; // Keep track of the last student in the list
    
    for (int i = 0; i < numStudents; i++)
    {
        newStudent = createStudent();
        
        if (head == NULL)
        {
            head = newStudent;
            currentStudent = head;
        }
        else
        {
            currentStudent->nextStudent = newStudent;
            currentStudent = newStudent;
        }
    }
    return head;
}
