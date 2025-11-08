#include<iostream>
using namespace std;
class ArrayX
{
    private:
        int *Arr;
        int iSize;
    public:
        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
        }
        ~ArrayX()
        {
            delete[]Arr;
        }
        void Accept()
        {
            cout<<"Enter "<<iSize<<" elements : \n";
            int i = 0;
            for(i = 0; i < iSize; i++)
            {
                cout<<"Enter the element number : "<<i + 1<<endl;

                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"The elements of the array are :\n";
            int i = 0;
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<" ";
            }
            cout<<endl;
        }
        bool LinearSearch(int No)   // N
        {
            int i = 0;
            bool bFlag = 0;
            for(i = 0; i < iSize; i++)
            {
                if(Arr[i] == No)
                {
                    bFlag = true;
                    break;
                }
            }
            return bFlag;
        }
        bool BidirectionalSearch(int No) // N/2
        {
            int iStart = 0;
            int iEnd = 0;
            bool bFlag = 0;
            for(iStart = 0, iEnd = (iSize - 1); iStart <= iEnd; iStart++,iEnd--)
            {
                if((Arr[iStart] == No) || (Arr[iEnd] == No))
                {
                    bFlag = true;
                    break;
                }
            }
            return bFlag;
        }
};
int main()
{
    int iLength = 0;

    cout<<"Enter the size of array\n";
    cin>>iLength;

    bool bRet = false;
    ArrayX *aobj = new ArrayX(iLength);
    
    aobj->Accept();
    
    aobj->Display();

    

    delete aobj;
    
    return 0;
}