#include "main.h"

Student* studentList(int numStudent)
{
    char *firstName, *lastName;
    int Id;
    Student *student ,*head;
    head = student;
    for (size_t i = 1; i < numStudent; i++)
    {
        int numMarks = getInt("How many modules do you have ? : ");
        student = createStudent(numMarks);
    }
    
  
    return head;
}