//Program to print 5 to 1 on console
#include<iostream>
using namespace std;
class Print
{
    public:
        void Display()
        {
            int iCnt = 0;
            iCnt = 5;
            while(0 < iCnt)
            {
               cout<<iCnt<<"\n";
               iCnt--;
            }
        }

};
int main()
{
    Print obj;
    obj.Display();

    return 0;
}