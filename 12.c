//write a program to allocate memory to store 5 prices
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *prices;
    prices = (float*)malloc(5*sizeof(float));
    prices[0]=3000;
    prices[1]=2300;
    prices[2]=250;
    prices[3]=3450;
    prices[4]=700;
    return 0;
}