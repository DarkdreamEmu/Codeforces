#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int bf,af;
    string s;

    cin>>n;

    bool f = false;
    for(int i=0; i<n; i++)
    {
        cin>>s>>bf>>af;
        if(bf>=2400 && af>bf)
        {
            f=true;
            break;
        }
    }
    if(f)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
//Codeforces Round #357 (Div. 2)
