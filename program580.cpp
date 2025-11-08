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

        bool BinarySearchInc(
                            int iNo
                        )
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;
            
            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == iNo)
                {
                    bFlag = true;
                    break;
                }
                
                else if(iNo < Arr[iMid]) // First half(left window)
                {
                    iEnd = iMid - 1;
                }

                else if(iNo > Arr[iMid]) // Second half(right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while

            return bFlag;
        }

        bool BinarySearchDec(
                            int iNo
                        )
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;
            
            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == iNo)
                {
                    bFlag = true;
                    break;
                }
                
                else if(iNo > Arr[iMid]) // First half(left window)
                {
                    iEnd = iMid - 1;
                }

                else if(iNo < Arr[iMid]) // Second half(right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while

            return bFlag;
        }

        bool BinarySearchEfficientInc(
                                    int iNo
                                )
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;
            
            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if((Arr[iMid] == iNo) || (Arr[iStart] == iNo) || (Arr[iEnd] == iNo))
                {
                    bFlag = true;
                    break;
                }
                
                else if(iNo < Arr[iMid]) // First half(left window)
                {
                    iEnd = iMid - 1;
                }

                else if(iNo > Arr[iMid]) // Second half(right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while

            return bFlag;
        }

        bool BinarySearchEfficientDec(
                                    int iNo
                                )
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;

            iStart = 0;
            iEnd = iSize - 1;
            
            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if((Arr[iMid] == iNo) || (Arr[iStart] == iNo) || (Arr[iEnd] == iNo))
                {
                    bFlag = true;
                    break;
                }
                
                else if(iNo > Arr[iMid]) // First half(left window)
                {
                    iEnd = iMid - 1;
                }

                else if(iNo < Arr[iMid]) // Second half(right window)
                {
                    iStart = iMid + 1;
                }
            } // End of while

            return bFlag;
        }

        bool CheckSortedInc()
        {
            bool bFlag = true;

            for(int i = 0; i < (iSize - 1); i++)
            {
                if(Arr[i] <= Arr[i + 1])
                {
                    continue;
                }
                else
                {
                    bFlag = false;
                    break;
                }
            }
            return bFlag;
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

    //cout<<"Enter the value that you want to search\n";
    //cin>>iValue;

    bRet = aobj->CheckSortedInc();

    if(true == bRet)
    {
        cout<<"data is sorted in increasing order\n";
    }
    else
    {
        cout<<"data is not sorted in increasing order\n";
    }
    

    delete aobj;
    
    return 0;
}