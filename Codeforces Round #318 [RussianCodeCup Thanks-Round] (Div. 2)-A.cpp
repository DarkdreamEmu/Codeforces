#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    priority_queue<int>p;
    while(cin>>n)
    {
        int a;
        cin>>a;
        for(int i=2; i<=n; i++)
        {
            int a;
            cin>>a;
            p.push(a);
        }
        int res=0;
        while(!p.empty())
        {
            int c=p.top();
            p.pop();
            if(c>=a)
            {
                c-=1;
                a+=1;
                p.push(c);
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
//Codeforces Round #318 [RussianCodeCup Thanks-Round] (Div. 2)
