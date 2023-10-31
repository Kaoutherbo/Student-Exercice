#ifndef MAIN_H
#define MAIN_H

// Header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structures
typedef struct Marks Marks;
struct Marks{
    float mark;
    int coef;
    struct Marks *nextMark; 
};

typedef struct Student Student;

struct Student{
    int ID;
    char *fName;
    char *lName;
    float average;
    Marks *mark;
    struct Student *nextStudent;
};

// prototypes of functions
int getInt(char *message);
int getChar(char *message);
int getFloat(char *message);
Student *createStudent();
Marks *createMarks();



#endif
