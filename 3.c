// create structures to store vectors then make a function to return sum of 2 vectors
#include <stdio.h>
struct vector{
    int x;
    int y;
    int z;
};
struct vector CalcSum(struct vector v1, struct vector v2, struct vector sum);
int main()
{
    struct vector v1 ;
    printf("Enter x component of first vector: ");
    scanf("%d",&v1.x);
    printf("Enter y component of first vector:");
    scanf("%d",&v1.y);
    printf("Enter z component of first vector: ");
    scanf("%d",&v1.z);
    struct vector v2;
    printf("Enter x component of second vector: ");
    scanf("%d",&v2.x);
    printf("Enter y component of second vector: ");
    scanf("%d",&v2.y);
    printf("Enter z component of second vector: ");
    scanf("%d",&v2.z);
    struct vector sum;
    CalcSum(v1,v2,sum);
    return 0;
}
struct vector CalcSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x ;
    sum.y = v1.y + v2.y;
    sum.z = v1.z + v2.z;
    printf("X component of sum is %d \n",sum.x);
    printf("Y component of sum is %d \n",sum.y);
    printf("Z component of sum is %d \n",sum.z);
    return sum;
}