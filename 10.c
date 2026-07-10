//a and b 2 numbers are written in a file write program to replace numbers with their sum
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("sum.txt","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);  
    fclose(fptr); 
    fptr = fopen("sum.txt","w");
    fprintf(fptr,"%d",a+b);
    fclose(fptr);
    return 0;
}