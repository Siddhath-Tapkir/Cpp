#include<iostream>
using namespace std;
template <class T>
T Largest(T *Arr, int iSize)
{
    if(Arr == NULL || iSize <= 0)
    {
        return -1;
    }
    T Large;
    Large = Arr[0];
    for(int iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Large < Arr[iCnt])
        {
            Large = Arr[iCnt];
        }
    }
    return Large;
}
int main()
{


    return 0;
}