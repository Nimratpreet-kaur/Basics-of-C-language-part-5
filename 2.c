// enter adress(house number,block,city,state)of 5 people
#include <stdio.h>
#include <string.h>
typedef struct adress
{
    int houseNo;
    char block;
    char city[50];
    char state[50];
} add;
void printAdd(add a1);

int main()
{
    add a1 = {21, 'A', "Mumbai", "Maharashtra"};
    printAdd(a1);
    add a2 = {54, 'B', "Bengaluru", "Karnataka"};
    printAdd(a2);
    add a3 = {65, 'B', "Chennai", "Tamil Nadu"};
    printAdd(a3);
    add a4 = {34, 'C', "Kolkata", "West Bengal"};
    printAdd(a4);
    add a5 = {53, 'A', "Jaipur", "Rajasthan"};
    printAdd(a5);
    return 0;
}
void printAdd(add a1)
{
    printf("House No. : %d \n", a1.houseNo);
    printf("Block: %c \n", a1.block);
    printf("City: %s \n", a1.city);
    printf("State: %s \n", a1.state);
    printf("\n");
}