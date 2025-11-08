//Accept two numbers from user and display comman on bits in binary format
#include<iostream>
using namespace std;
typedef unsigned int UINT;
void CountOne(UINT iNo1, UINT iNo2)
{
    UINT A = iNo1, B = iNo2;
    int iDigit1 = 0, iDigit2 = 0, iCnt = 0, jCnt = 0;
    while(0 != A)
    {
        iDigit1 = A % 2;
        if(1 == iDigit1)
        {
            iCnt++;
        }
        A = A / 2;
    }
    while(0 != B)
    {
        iDigit2 = B % 2;
        if(1 == iDigit2)
        {
            jCnt++;
        }
        B = B / 2;
    }
    
    cout<<iNo1<<":\t"<<iCnt<<endl;
    cout<<iNo2<<":\t"<<jCnt<<endl;
    
}
int main()
{
    UINT iValue1 = 0, iValue2 = 0;
    cout<<"Enter first numbers\n";
    cin>>iValue1;
    cout<<"Enter second number\n";
    cin>>iValue2;
    CountOne(iValue1,iValue2);

    return 0;
}