//Dynamic memory allocation
/*
malloc() memory allocation{takes bytes to be allocated and return void type pointer}
calloc()continuous allocation{intitializes with zero}
free()
realloc()*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%d\n",sizeof(int) );
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=11;
    ptr[2]=45;
    ptr[3]=4;
    ptr[4]=7;
    for(int i = 0; i <5 ; i++ )
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);


    float *_ptr;
    _ptr = (float*)calloc(5,sizeof(float));
    _ptr[3]=4;
    for(int i = 0; i <5; i++)
    {
        printf("%f\n",_ptr[i]);
    }
    

    _ptr = realloc(ptr,8);
    for (int i = 0; i<8;i++)
    {
        printf("%f\n",_ptr[i]);
    }
    return 0;

}