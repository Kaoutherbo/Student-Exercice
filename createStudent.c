#include "main.h"

/**
 * createStudent - function that create student
 * 
 * @void: no parameter
 * 
 * Return: pointer to one student
*/
Student *createStudent(void)
{
    Student *student = (Student *)malloc(sizeof(Student));

    if (student == NULL) {
        printf("Memory allocation failed.\n");
        exit(-1);
    }

    int Id = getInt("Enter your ID: ");
    char *fName = getChar("Enter your first name: ");
    char *lName = getChar("Enter your last name: ");
    int numMarks = getInt("How many marks you have? : ");
    
    student->ID = Id;
    student->fName = fName;
    student->lName = lName;
    student->mark = markList(NULL, numMarks); // Create a new list of marks for each student
    student->average = calculateAverage(student->mark);
    student->nextStudent = NULL;

    return student;
}
