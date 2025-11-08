#include<iostream>
using namespace std;
template <class T>
int Frequency(T *Arr, int iSize, T Value)
{
    if(Null == Arr)
    {
        return -1;
    }
    int Freq = 0;
    
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Value)
        {
            Freq++;
        }
    }
    return Freq;
}
int main()
{

    return 0;
}