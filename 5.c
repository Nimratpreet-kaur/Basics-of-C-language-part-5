// Make a structure to store Bank account information of a customer of ABC Bank.Also,make an alias for it.
#include <stdio.h>
typedef struct BankAccount
{
    int acc;
    char name[100];
} acc;
int main()
{
    acc a[3] =
        {
            {123, "Nimrat"},
            {234, "ABC"},
            {345, "abc"}
        };
    for (int i = 0; i < 3; i++)
    {
        printf("Account number : %d\n", a[i].acc);
        printf("User Name : %s", a[i].name);
        printf("\n");
    }
    return 0;
}