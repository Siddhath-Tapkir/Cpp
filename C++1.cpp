//Program to print a word 5 times on console
#include<iostream>
using namespace std;
class Print
{
    public:
        void Display()
        {
            int iCnt = 0;
            for(iCnt = 1; iCnt <= 5; iCnt++)
            {
                cout<<"Siddharth\n";
            }
        }

};
int main()
{
    Print obj;
    obj.Display();

    return 0;
}