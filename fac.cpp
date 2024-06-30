#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int subArray(int arr[], int size)
{
    int sum = 0;
    if (size == 0)
        cout << "no element in the array0" << endl;
    else
    {
        sum = arr[0] + subArray(arr + 1, size - 1);
    }
    return sum;
}
int factorial(int ar)
{
    if (ar <= 1)
    {
        return 1;
    }
    else
    {
        return ar * factorial(ar - 1);
    }
}
int reverseAnumber(string str, int start, int end)
{
if(start>=end)

    std::swap(str[start], str[end]);
    return reverseAnumber(str,start+1,end-1);

}
    int main()
{

string str1;
cout<<"enter the string"<<endl;
getline(cin, str1);
reverseAnumber(str1, 0 , str1.length()-1);
cout<<str1<<endl;
//int rev=stoi(str1);
//cout<<rev;

    return 0;
}
