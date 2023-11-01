#include "main.h"

/**
 * displayList - procedure that display the content of Student list
 * 
 * @head: pointer to Student list
 * 
 * Return: void 
*/
void displayList(Student *head)
{
    Student *temp = head;
    int count = 0;
    if (head == NULL)
        printf("The list is empty ");

    while (temp != NULL)
    {
        count++;
        printf("\n Student number %d :", count);
        printf("\n ID : %d ", temp->ID);
        printf("\n First Name : %s ", temp->fName);
        printf("\n Last Name : %s ", temp->lName);
        printf("\n The average : %f ", temp->average);

        temp = temp->nextStudent;
    }
}
