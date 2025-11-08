#include<iostream>
using namespace std;
template <class T>
void Display(T Value, int No)
{
    if(0 > No)
    {
        No = -(No);
    }
    for(int iCnt = 1; iCnt <= No; iCnt++)
    {
        cout<<Value<<"\t";
    }
    cout<<"\n";
}
int main()
{
    Display('A',-5);

    return 0;
}