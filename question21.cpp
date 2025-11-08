#include<iostream>
using namespace std;
class Array
{
    protected:
        int *Arr;
        int iSize;
    public:
        Array(int Value = 10)
        {
            this->iSize = Value;
            this->Arr = new int[iSize];
        }
        Array(Array &ref)
        {
            this->iSize = ref.iSize;
            this->Arr = new int[this->iSize];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                this->Arr[iCnt] = ref.Arr[iCnt];
            }
        }
        ~Array()
        {
            delete []Arr;
        }
        inline void Accept();
        inline void Display();
};
void Array :: Accept()
{
    for(int iCnt = 0; iCnt < this->iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}
void Array :: Display()
{
    for(int iCnt = 0; iCnt < this->iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<" ";
    }
    cout<<"\t";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(no)
        {}
        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: SearchFirst(int Value)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            break;
        }
    }
    if(i == iSize)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}
int ArrSearch :: Frequency(int Value)
{
    int iCnt = 0;
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int ArrSearch :: SearchLast(int Value)
{   
    int Pos = -1;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Value)
        {
            Pos = (iCnt + 1);
        }
    }
    if(Pos == -1)
    {
        return -1;
    }
    else
    {
        return Pos;
    }
}
int ArrSearch :: EvenCount()
{
    int iCount = 0;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}
int ArrSearch :: OddCount()
{
    int iCount = 0;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iCount++;
        }
    }
    return iCount;
}
int ArrSearch :: SumAll()
{
    int iSum = 0;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = Arr[iCnt] + iSum;
    }
    return iSum;
}
int main()
{
    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet = sobj1.Frequency(11);

    cout<<"Frequency is : "<<iRet<<endl;

    iRet = sobj1.SearchFirst(11);
    
    cout<<"First occurence is : "<<iRet<<endl;

    return 0;
}