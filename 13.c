//allocate memory to store first 5 odd numbers then reallocate to store first 6 even numbers.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    for(int i = 0,j=1; i<5,j<10;i++,j+=2)
    {
        ptr[i]=j;
        printf("%d\n",ptr[i]);
    }
    printf("\n");
   

    ptr = realloc(ptr,6);
    for(int i = 0 , j = 0 ; i <6 , j<11; i++ , j+=2)
    {
        ptr[i]=j;
        printf("%d\n",ptr[i]);
    }
    return 0;
}