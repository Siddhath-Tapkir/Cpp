// Program to accept number from user and toggle it's 7th and 10th bit
#include<iostream>
using namespace std;
typedef unsigned int UINT;
int ToggleBit(int iNo)
{
    UINT iMask = 0x00000240, iResult = 0;
    
    iResult = iMask ^ iNo;
    return iResult;

}
int main()
{
    UINT iValue = 0, iRet = 0;
    cout<<"Enter a number\n";
    cin>>iValue;
    iRet = ToggleBit(iValue);
    cout<<"Modified number is "<<iRet<<"\n";

    return 0;
}