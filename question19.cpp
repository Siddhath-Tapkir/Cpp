//Accept a number from user and two position and check whether it's first or second bit is on or off
#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    int iMask1 = 1, iMask2 = 1;
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);
    if((iMask1 & iNo) || (iMask2 & iNo))
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
    UINT iValue = 0, iLoc1 = 0, iLoc2 = 0; 
    bool bRet = false;
    cout<<"Enter number\n";
    cin>>iValue;
    cout<<"Enter two position\n";
    cin>>iLoc1>>iLoc2;
    bRet = CheckBit(iValue,iLoc1,iLoc2);
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