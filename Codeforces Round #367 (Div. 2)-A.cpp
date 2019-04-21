#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        int n;
        cin>>n;
        double mn=100000;
        for(int i=0; i<n; i++)
        {
            double res=0;
            int x1,y1,v;
            cin>>x1>>y1>>v;
            res=double(x1-x)*double(x1-x)+double(y1-y)*double(y1-y);
            res=sqrt(res);
            res=res/double(v);
            mn=min(mn,res);
        }
        printf("%.20lf\n",mn);
    }
    return 0;
}
//Codeforces Round #367 (Div. 2)
