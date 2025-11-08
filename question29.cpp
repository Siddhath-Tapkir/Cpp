#include<iostream>
using namespace std;
template <class T>
int FirstFind(T *Arr, int iSize, T Value)
{
    if(NULL == Arr)
    {
        return -1;
    }
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Value)
        {
            break;
        }
    }
    if(Arr[iCnt] == Value)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}
int main()
{
int arr[] = {10, 20, 30, 40, 30};
    char carr[] = {'a', 'b', 'c', 'd'};

    cout << "First occurrence of 30: " << FirstFind(arr, 5, 10) << endl;
    cout << "First occurrence of 'c': " << FirstFind(carr, 4, 'a') << endl;
    return 0;
}