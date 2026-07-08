// Program to input student information from user and enter it to a file
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Student.txt", "w"); // will be created if doesn't exists
    char name[100];
    int age;
    float cgpa;
    printf("Enter Name of student: ");
    scanf("%s", &name);
    printf("Age of student: ");
    scanf("%d", &age);
    printf("CGPA of student: ");
    scanf("%f",&cgpa);
    fprintf(fptr,"Student Name : %s\n",name);
    fprintf(fptr,"Student Age : %d\n",age);
    fprintf(fptr,"Student CGPA : %f\n",cgpa);
    fclose(fptr);
    return 0;
}