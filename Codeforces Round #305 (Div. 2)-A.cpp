#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    while(cin>>s>>k)
    {
        int l=s.size();
        if(l%k!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            for(int i=0; i<l; i+=l/k)
            {
                string ss=s.substr(i, l/k);
                for(int j=0, m=ss.size()-1; j<m; j++,m--)
                {
                    if(ss[j]!=ss[m])
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
            cout<<"YES"<<endl;
            return 0;
        }
    }
    return 0;
}
//Codeforces Round #305 (Div. 2)
