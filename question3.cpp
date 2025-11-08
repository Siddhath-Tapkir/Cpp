// Program to check whether a given number's 15th,7th and 28th bit is on or off
#include<iostream>
using namespace std;
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0x08004040;
    UINT iResult = 0;
    iResult = iMask & iNo;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;
    cout<<"Enter a number\n";
    cin>>iValue;
    bRet = CheckBit(iValue);
    if(true == bRet)
    {
        cout<<"15th,7th and 28th bit is on\n";
    }
    else
    {
        cout<<"15th,7th and 28th bit is off\n";
    }

    return 0;
}