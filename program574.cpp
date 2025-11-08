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
            cout<<"Enter the elements\n";
            int i = 0;
            for(i = 0; i < iSize; i++)
            {
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
    bool bRet = false;
    ArrayX aobj(5);
    aobj.Accept();
    aobj.Display();
    bRet = aobj.BidirectionalSearch(10);

    if(true == bRet)
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"Element is not present\n";
    }
    return 0;
}