
using System;

class ArithmeticX
{
	public int EvenFactorial(int iNo)
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
}

class Demo
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
	
		int iRet = aobj.EvenFactorial(iValue);

		Console.WriteLine(iRet);
	}
}