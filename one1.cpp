// find the target element in the array
#include <iostream>
using namespace std;
bool isKeypersent(int arr[][4], int target, int row, int col)
{
 for(int i=0;i<3;i++)
    {
for(int j=0;j<4;j++)
{if(arr[i][j]==target)
return true;
}
return false;
}
}

int main() {
int arr[3][4]={1,2,3,4,6,8,9};
int key;
cin>>key;
cout<<isKeypersent(arr,key,3,4);
return 0;
}
