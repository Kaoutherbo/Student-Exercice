#include "main.h"

/**
 * studentList - this function create a list of students 
 * 
 * @head: pointer to first student
 * @numStudents: number of students in the list
 *
 * Return: pointer to list of students
*/

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
