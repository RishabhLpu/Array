#include<vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    int m;
    cin>>m;
  
    for (int i = 0; i < m; i++) {
        int ele;
        cin>>ele;
        v.push_back(ele);
        }
        int max=v[0];
    int smax=-1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>max)
            {
                smax=max;
                max=v[i];
            }
        }
        cout << endl;
        
    cout << max << smax<<endl;
    return 0;
}
