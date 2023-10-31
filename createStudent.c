#include "main.h"

Student *createStudent(int numMarks)
{
    Student *student = (Student *)malloc(sizeof(Student));
    Marks *mark = (Marks *)malloc(sizeof(Marks));

    if (!student || !mark){
        printf("Memory allocation failed.\n");
        exit(-1);
    }
    int Id = getInt("Enter your Id : ");
    char *fName = getChar("Enter your first name: ");
    char *lName = getChar("Enter your last name: ");

    student->ID=Id;
    strcpy(student->fName, fName);
    strcpy(student->lName, lName);
    mark = createMarks(numMarks);
    student->average = calculateAverage(mark);
    student->mark = mark;
    student->nextStudent = NULL;

    return student;
        
}