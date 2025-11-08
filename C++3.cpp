//Program to see if the number is divisible by 5 or not
#include<iostream>
using namespace std;
class Divisible
{
    public:
        int iNo;
        Divisible(int A)
        {
            this->iNo = A;
        }
        bool CheckDiv()
        {
          if((this->iNo % 5) == 0)
          {
            return true;
          }
          else
          {
            return false;
          }
        }

};
int main()
{
    int iValue = 0;
    bool bRet = false;
    
    cout<<"Enter a number\n";
    cin>>iValue;
    Divisible obj(iValue);
    bRet = obj.CheckDiv();
    if(true == bRet)
    {
        cout<<iValue<<" Is divislbe by 5\n";
    }
    else
    {
        cout<<iValue<<" Is not divislbe by 5\n";
    }

    return 0;
}