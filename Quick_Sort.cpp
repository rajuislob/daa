
#include <bits/stdc++.h>
using namespace std;
class quick
{
  public:
   long int *arr;
   long int length;
     int c =0;

    quick(int l)
    {
        length=l;
    }
    ~quick()
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

         cout<<" No. of comparisions "<<c<<endl;
    }


   void input()
    {

        arr = new long int [length];
        cout<<" ENTER THE VALUE OF THE ARRAY "<<endl;

       for(long int i=0; i<length; i++)
       {
          arr[i]=30+rand()%970;
          cout<<arr[i]<<"   ";
       }

       cout<<endl;
    }


   int Partition(int start,int last)
   {
       int pivot = arr[last];
       int index=start;
       for(int i=start;i<last;i++)
       {

           if(arr[i]<= pivot)
           {
               swap(arr[i],arr[index]);
               index++;
           }
           c++;
       }

       swap(arr[index],arr[last]);
       return index;


   }

   int RandomizedPartition(int start,int last)
   {

      int r,temp;
      temp=rand();
     r=start+temp%(last-start+1);
       swap(arr[last],arr[r]);
       return Partition(start, last);
   }


   void quicksort(int start,int last)
   {

       if(start<last)
       {
           int index=RandomizedPartition(start,last);
           quicksort(start,index-1);
           quicksort(index+1,last);

       }

   }

};
int main()
{
    int ch=100;
    while(ch--)
    {


    long int n;
    cout<<" SIZE OF THE ARRAY"<<endl;
        n= 30+rand()%970;
        cout<<n;
        quick q(n);

     q.input();
    cout<<" *************************UNSORTED ARRAY *******************************"<<endl;

   q.quicksort(0,n-1);
    cout<<"************************** SORTED ARRAY******************************* "<<endl;
    q.display();

    }
}


