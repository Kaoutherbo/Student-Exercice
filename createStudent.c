#include "main.h"

Student *createStudent()
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
    student->average = 0;
    student->mark = markList(NULL, numMarks); // Create the list of marks
    student->nextStudent = NULL;

    return student;
}
