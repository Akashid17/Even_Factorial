
#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCount = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0 || iNo == 1)
    {
        iCount = 0;
    }

    for(int i = iNo; i > 0; i--)
    {
        if(i%2 == 0)
        {
            iCount *= i;
        }
    }

    return(iCount);
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    int iRet = EvenFactorial(iValue);

    printf("%d\n",iRet);

    return 0;
}