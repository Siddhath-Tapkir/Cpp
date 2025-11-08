// Program to check whether a given number's 7th,8th and 9th bit is on or off
#include<iostream>
using namespace std;
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0x000001c0;
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
        cout<<"7th,8th and 9th bit is on\n";
    }
    else
    {
        cout<<"7th,8th and 9th bit is off\n";
    }

    return 0;
}