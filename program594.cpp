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

        void BubbleSort()
        {
            if(true == Sorted)
            {
                return;
            }
            
            int i = 0, j = 0, temp = 0;

            for(i = 0; i < iSize; i++)  // Outer Loop
            {
                for(j = 0; j < (iSize - 1); j++)  // Inner loop
                {
                    if(Arr[j] > Arr[j + 1])
                    {
                        temp = Arr[j];
                        Arr[j] = Arr[j +1];
                        Arr[j + 1] = temp;
                    }
                }
                cout<<"Data after Pass : "<<i + 1<<endl;
                Display();
            }
        }

        void BubbleSortEfficient()
        {
            if(true == Sorted)
            {
                return;
            }

            bool bFlag = true;
            
            int i = 0, j = 0, temp = 0;

            for(i = 0; (i < iSize && bFlag == true); i++)  // Outer Loop
            {
                bFlag = false;   
                for(j = 0; j < (iSize - 1 - i); j++)  // Inner loop
                {
                    if(Arr[j] > Arr[j + 1])
                    {
                        temp = Arr[j];
                        Arr[j] = Arr[j +1];
                        Arr[j + 1] = temp;

                        bFlag = true;
                    }
                }
                cout<<"Data after Pass : "<<i + 1<<endl;
                Display();
            }
        }

        void SelectionSort()
        {
            int i = 0, j = 0, min_index = 0, temp = 0;

            for(i = 0; i < iSize - 1; i++)
            {
                min_index = i;

                for(j = i + 1; j < iSize; j++)
                {
                    if(Arr[j] < Arr[min_index])
                    {
                        min_index = j;
                    }
                }
                
                if(i != min_index)
                {    
                    temp = Arr[i];
                    Arr[i] = Arr[min_index];
                    Arr[min_index] = temp;
                }
            }
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

    aobj->SelectionSort();

    cout<<"Data after sorting : \n";
    
    aobj->Display();
    
    delete aobj;
    
    return 0;
}