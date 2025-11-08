// program accept a number from user and printing * that many times on console
#include<iostream>
using namespace std;
class Program
{
    public:
        int iNo;
        Program(int A)
        {
            this->iNo = A;
        }
        void Pattern()
        {
            int iCnt = 0;
            for(iCnt = 1; iCnt <= this->iNo; iCnt++)
            {
                cout<<"*\n";
            }
        }

};
int main()
{
    int iValue = 0;
   
    
    cout<<"Enter a number\n";
    cin>>iValue;
    Program obj(iValue);
    obj.Pattern();
  
    return 0;
}