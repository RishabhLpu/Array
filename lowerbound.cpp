//find the lower bound of the array
#include<iostream>
using namespace std;
int lowerbound(int arr[], int size, int x)
{
int start =0;
int end=size-1;
int mid= (start+end)/2;
ans=size;
while(start<=end)
{
if(arr[mid]>x)
{
ans=mid;
end=mid-1;
}
else{
start=mid+1;
}
mid=(start+end)/2;
return ans;
}
