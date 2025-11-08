//Accept a number from user and check whether it's 9th and 12th bit is on or off
#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    int iMask = 0x00000500, iResult = 0;
    iResult = iMask & iNo;
    if(0 == iResult)
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
    UINT iValue = 0; 
    bool bRet = false;
    cout<<"Enter number\n";
    cin>>iValue;
    bRet = CheckBit(iValue);
    if(true == bRet)
    {
        cout<<"TRUE\n";
    }
    else
    {
        cout<<"FALSE\n";
    }
    

    return 0;
}