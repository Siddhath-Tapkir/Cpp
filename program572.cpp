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
};
int main()
{

    ArrayX aobj(5);
    aobj.Accept();
    aobj.Display();
    return 0;
}