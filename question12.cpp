// Accept a number from user and position and off that bit
#include<iostream>
using namespace std;
typedef unsigned int UINT;
int OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iResult = 0;
    iMask = iMask << (iPos - 1);
    iMask = ~iMask;
    iResult = iMask & iNo;
    return iResult;
 
}
int main()
{
    UINT iRet = 0;
    UINT iValue = 0, iLocation = 0;
    cout<<"Enter number\n";
    cin>>iValue;
    cout<<"Enter position\n";
    cin>>iLocation;
    iRet = OffBit(iValue, iLocation);
    cout<<"Updated number is : "<<iRet<<endl;
    


    return 0;
}