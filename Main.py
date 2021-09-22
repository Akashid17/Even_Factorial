
def EvenFactorial(iNo):

    iCount = 1

    if iNo < 0:
        iNo = -iNo

    if iNo == 1 or iNo == 0:
        iCount = 0

    for x in range(iNo,0,-1):
        if x%2 == 0:
            iCount *= x

    return iCount

def main():

    iValue = int(input("Enter Number\n"))
    iRet = EvenFactorial(iValue)

    print(iRet)

if __name__ == "__main__":
    main()