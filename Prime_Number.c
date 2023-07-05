#include<stdio.h>

void PrimeFind(int inputNum)
{
    int i;
    for(i=2;i<=inputNum;i++)
    {
        while(inputNum%i == 0)
        {
            printf("%d ",i);
            inputNum/=i; // infinity loop bug solver
        }
    }
}

int main()
{
    int userNum;
    printf("Please enter number >");
    scanf("%d",&userNum);
    printf("Prime Number :");
    PrimeFind(userNum);
}
