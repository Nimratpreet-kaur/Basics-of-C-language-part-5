// structure
// write program to store data of 3 students.
// 4 ways to store;
#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[100];
    int rollNumber;
    float cgpa;
}stu; // typedef[to create alias for data type]
void printInfo(stu s1);
int main()
{
    stu s1;                       // struct student IT[100]; // array of structures
    s1.rollNumber = 12;                      // IT[0].rollNumber = 12;
    s1.cgpa = 9.3;                           // IT[0].cgpa = 9.3;
    strcpy(s1.name, "Nimrat");               // strcpy(IT[0].name,"Nimrat");
    printInfo(s1);
   
    printf("\n");

    stu s2 = {"Aman", 13 , 9.1};
    printInfo(s2);
    
    printf("\n");

    stu s3;
    s3.rollNumber = 14;
    s3.cgpa = 9.8;
    strcpy(s3.name, "Happy");
    printf("Student Name : %s \n", s3.name);
    printf("Student Roll Number : %d \n", s3.rollNumber);
    printf("Student CGPA : %f \n", s3.cgpa);

    // initializing structures
    // struct student s1 = {"Nimrat" , 12 , 9.3};
    // struct student s2 = {"Aman" , 13 , 9.1};
    // struct student s3 = {"Happy", 14 , 9.8};

    // pointer to structure
    // struct student s1;
    // struct student *ptr;
    // ptr = &s1;
    // printf("Student Roll Number : %d \n", (*ptr).rollNumber);

    // arrow operator
    // (*ptr).roll = ptr->roll
    return 0;
}
void printInfo(stu s1)
{
    printf("student information : \n");
    printf("Student name : %s \n",s1.name);
    printf("Student roll number: %d \n",s1.rollNumber);
    printf("Student CGPA : %f\n",s1.cgpa);
}