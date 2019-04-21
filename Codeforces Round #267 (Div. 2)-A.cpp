#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int a,b;
        int count=0;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            if(b-a>=2)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
//Codeforces Round #267 (Div. 2)
