//Accept a number from user and count number of one's in it's binary
#include<iostream>
using namespace std;
typedef unsigned int UINT;
int CountOne(UINT iNo)
{
    int iDigit = 0, iCnt = 0;
    while(0 != iNo)
    {
        iDigit = iNo % 2;
        if(1 == iDigit)
        {
            iCnt++;
        }
        iNo = iNo / 2;
    }
    return iCnt;
}
int main()
{
    UINT iValue = 0;
    int iRet = 0;
    cout<<"Enter number\n";
    cin>>iValue;
    iRet = CountOne(iValue);
    cout<<"Number of one's are: "<<iRet<<endl;

    return 0;
}