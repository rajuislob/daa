
#include<iostream>
using namespace std;

class Count_Sort
{
  public:
    int *arr;
   int length;

    Count_Sort(int l)
    {
        length=l;
    }
    ~Count_Sort()
    {
        delete []arr;
    }
    void display()
    {
        for(int i=0; i<length; i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;

    }


   void input()
    {

        arr = new  int [length];
        cout<<"Enter the elements : ";
       for( int i=0; i<length; i++)
       {
         cin>>arr[i];
       }

       cout<<endl;
    }

     int GetMax()
    {
        int Max =arr[0];
        for(int i=1;i<length;i++)
        {
            if(arr[i]>Max)
            {
                Max=arr[i];
            }

        }
        return Max;
    }

    void CountingSort()
    {
        int mx=GetMax();
        int B[length];
        int C[mx+1]={0};        
        for(int i =0;i<length;i++)
        {
            C[arr[i]]++;
        }

        for(int i=1;i<=mx;i++)
        {
            C[i]+=C[i-1];
        }
        for(int i=length-1;i>=0;i--)
        {
            B[C[arr[i]]-1]=arr[i];
            C[arr[i]]--;
        }
        for(int i=0;i<length;i++)
        {
            arr[i]=B[i];
        }

    }

};
int main()
{
    int ch=1;
    do{
	    int n;
	    cout<<"Enter the size of the array : ";
	    cin>>n;
	    Count_Sort c(n);
		c.input();
	    c.CountingSort();
	    cout<<"************************** SORTED ARRAY******************************* "<<endl;
	    c.display();
	    cout<<" Enter 1 to continue :  ";
	    cin>>ch;
    }while(ch==1);
}




