// create a structure to store complex numbers (use arrow operators)
#include <stdio.h>
#include <string.h>
struct complex{
    int real;
    int imaginary;
};
int main()
{
    struct complex number1 = {5,8};
    struct complex *ptr = &number1;
    printf("Imaginary part : %d \n",ptr->imaginary);//(*ptr).imaginary can also be used
    printf("Real part : %d",ptr->real);
    return 0;
}