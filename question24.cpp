#include<iostream>
using namespace std;
template <class T>
T AddN(T *Arr, int iSize)
{
    T sum;
    if(Arr == NULL)
    {
        return -1;
    }

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        sum = Arr[iCnt] + sum;
    }
    return sum;
}
int main()
{


    return 0;
}