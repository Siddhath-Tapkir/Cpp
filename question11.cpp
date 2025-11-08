// Accept a number from user and position and check whether the bit is on or off
#include<iostream>
using namespace std;
typedef unsigned int UINT;
bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iResult = 0;
    iMask = iMask << (iPos - 1);
    iResult = iMask & iNo;
    
    if(iResult == iNo)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    bool bRet = false;
    UINT iValue = 0, iLocation = 0;
    cout<<"Enter number\n";
    cin>>iValue;
    cout<<"Enter position\n";
    cin>>iLocation;
    bRet = CheckBit(iValue, iLocation);
    if(false == bRet)
    {
        cout<<"Bit is OFF\n";
    }
    else
    {
        cout<<"Bit is ON\n";
    }


    return 0;
}