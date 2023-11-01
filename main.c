#include "main.h"

/**
 * main - Check code
 * 
 * Return: 0 for success -1 for fail
*/
int main()
{
    Student *students = NULL;
    int numStudents = getInt("How many students in the class : ");
    students = studentList(students, numStudents);
    displayList(students);
    return 0;
}