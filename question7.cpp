// Program to accept number from user and off it's 7th and 10th bit and return modified number
#include<iostream>
using namespace std;
typedef unsigned int UINT;
int OffBit(int iNo)
{
    UINT iMask = 0x00000240, iResult = 0;
    iMask = ~iMask;
    iResult = iMask & iNo;
    return iResult;

}
int main()
{
    UINT iValue = 0, iRet = 0;
    cout<<"Enter a number\n";
    cin>>iValue;
    iRet = OffBit(iValue);
    cout<<"Modified number is "<<iRet<<"\n";

    return 0;
}