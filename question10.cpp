// Program to accept number from user and on it's 4th bit
#include<iostream>
using namespace std;
typedef unsigned int UINT;
int OnBit(int iNo)
{
    UINT iMask = 0x00000008, iResult = 0;
    
    iResult = iMask | iNo;
    return iResult;

}
int main()
{
    UINT iValue = 0, iRet = 0;
    cout<<"Enter a number\n";
    cin>>iValue;
    iRet = OnBit(iValue);
    cout<<"Modified number is "<<iRet<<"\n";

    return 0;
}