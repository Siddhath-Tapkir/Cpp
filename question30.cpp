#include<iostream>
using namespace std;
template <class T>
int LastFind(T *Arr, int iSize, T Value)
{
    int iCnt = 0;
    int Last = 0, iPos = -1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Value)
        {
            iPos = iCnt;
        }
    }
    if(iPos == -1)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
}
int main()
{
int arr[] = {10, 20, 30, 40, 30};
    char carr[] = {'a', 'b', 'c', 'd'};

    cout << "First occurrence of 30: " << LastFind(arr, 5, 30) << endl;
    cout << "First occurrence of 'c': " << LastFind(carr, 4, 'a') << endl;
    return 0;
}