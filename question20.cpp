//Accept a number from user and range and toggle all the bits from that position
#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo, int RangeFrom, int RangeTo)
{
    int iResult = 0, iMask = 1;
    iMask = iMask << (RangeFrom - 1);
    for(int iCnt = 1; iCnt <= RangeTo; iCnt++)
    {
        if()
    }
}
int main()
{
    UINT iValue = 0, Range = 0, Range2 = 0; 
    int iRet = 0;
    cout<<"Enter number\n";
    cin>>iValue;
    cout<<"Enter range \n";
    cin>>Range>>Range2
    iRet = CheckBit(iValue,Range,Range2);
   
    

    return 0;
}