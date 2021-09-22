
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:

        int EvenFactorial(int);
};

int ArithmeticX::EvenFactorial(int iNo) 
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

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    ArithmeticX aobj;
    iRet = aobj.EvenFactorial(iValue);

    cout<<iRet<<endl;

    return 0;
}