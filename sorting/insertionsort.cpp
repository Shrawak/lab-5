#include <iostream>
using namespace std;

void InsertionSort(int a[],int size);

int main()
{
    int arr[]={3,6,1,4,2,8,0,9};
    int size=sizeof(arr)/sizeof(int);
    InsertionSort(arr,size);
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}


void InsertionSort(int a[],int n)
{
    for(int j=0;j<n;j++)
    {
        int key=a[j];
        int i=j-1;
        while(i>=0 and a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
}
