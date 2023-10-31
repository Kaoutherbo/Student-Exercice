#include "main.h"

/**
 * main - Check code
 * 
 * Return: 0 for success -1 for fail
*/
int main()
{
    Student *students = NULL;
    int numStudent = getInt("How many student in the class : ");
    students = studentList(students, numStudent);
    displayList(students);
    return 0;
}