#include<iostream>
using namespace std;
class ArrayX    // Increasing
{
    private:
        int *Arr;
        int iSize;
        bool Sorted;
    public:
        ArrayX(int no)
        {
            iSize = no;
            Sorted = true;
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

                if(i > 0)
                {
                    if((Arr[i] < Arr[i - 1]) && (true == Sorted))   // Important ahe
                    {
                        Sorted = false;
                    }
                }
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
};
int main()
{
    int iLength = 0, iValue = 0;
    bool bRet = false;

    cout<<"Enter the size of array\n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);
    
    aobj->Accept();
    
    aobj->Display();

    

    delete aobj;
    
    return 0;
}