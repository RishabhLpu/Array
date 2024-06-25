#include <iostream>
using namespace std;
int insertionSort(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
    }
}
}
int main() {
    int arr[]={65,59,65,84,24,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
