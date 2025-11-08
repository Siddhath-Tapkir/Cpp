// Accept a number from user and toggle it's 1st and last nibble
#include<iostream>
using namespace std;
typedef unsigned int UINT;
int ToggleNibble(UINT iNo)
{
    UINT iMask = 0xf000000f, iResult = 0;
    
    iResult = iMask ^ iNo;
    return iResult;
 
}
int main()
{
    UINT iRet = 0;
    UINT iValue = 0;
    cout<<"Enter number\n";
    cin>>iValue;
    iRet = ToggleNibble(iValue);
    cout<<"Updated number is : "<<iRet<<endl;
    


    return 0;
}