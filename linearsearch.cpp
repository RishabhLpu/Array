#include <iostream>
using namespace std;
bool searches(int arr[], int size , int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}
int main()
 {
    int size;
cout<<"Emter the size "<<endl;
    cin>>size;
    cout<<"Enter the element "<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
    cout<<"Enter the value of the key "<<endl;
int key;
cin>>key;
if(searches(arr,size,key))
cout<<"element founded "<<endl;
else
    cout<<"Element not fonded"<<endl;

    
 }
