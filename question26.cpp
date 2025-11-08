#include<iostream>
using namespace std;
template <class T>
T Smallest(T *Arr, int iSize)
{
    if(Arr == NULL || iSize <= 0)
    {
        return -1;
    }
    T Small;
    Small = Arr[0];
    for(int iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Small > Arr[iCnt])
        {
            Small = Arr[iCnt];
        }
    }
    return Small;
}
int main()
{


    return 0;
}