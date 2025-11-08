// Accept a number from user and position and toggle that bit
#include<iostream>
using namespace std;
typedef unsigned int UINT;
int ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iResult = 0;
    iMask = iMask << (iPos - 1);
    iResult = iMask ^ iNo;
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
    iRet = ToggleBit(iValue, iLocation);
    cout<<"Updated number is : "<<iRet<<endl;
    


    return 0;
}