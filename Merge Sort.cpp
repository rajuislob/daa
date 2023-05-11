#include <iostream>
using namespace std;
#include <conio.h>

int comp=0;
void merge(int *,int, int , int );
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if(a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
            comp++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
            comp++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{
    int i,n;
    cout<<"\nEnter the no. of elements in the array : ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++)
    {
    	cout<<"Enter element "<<i+1<<" : ";
        cin>>a[i];
    }
    mergesort(a, 0, 4);
    cout<<"\nSorted array --> ";
    for (i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nNo. of comparisons : "<<comp<<endl;
    getch();
}
