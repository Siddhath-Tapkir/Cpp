#include<iostream>
using namespace std;
template <class T>
void Reverse(T *Arr, int iSize)
{   
   int iTemp = 0;
   int Size = iSize - 1;
   for(int iCnt = 0; iCnt < Size; iCnt++)
   {
        iTemp = Arr[iCnt];
        Arr[iCnt] = Arr[Size];
        Arr[Size] = iTemp;
        Size--;
   }
}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    Reverse(arr,9);
    for(int iCnt = 0; iCnt < 9; iCnt++)
    {
        cout<<arr[iCnt]<<"\t";
    }
    cout<<endl;
    return 0;
}