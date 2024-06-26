#include<iostream>
#include<string>
using namespace std;
int main()
{string  name;
getline(cin, name);
int n=0;
while(name[n]!=' ' && name[n]!='\0')
{
    n++;
}
cout << "length of the first word is "<<n;
return 0;
}
