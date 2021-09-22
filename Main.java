
import java.lang.*;
import java.util.*;

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

class Main
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iValue = sobj.nextInt();

		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.EvenFactorial(iValue);

		System.out.println(iRet);
	}
}