#include<bits/stdc++.h>
using namespace std;
#define maxn 106

int a[maxn],b[maxn];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)scanf("%d",&a[i]);
    int ans1 = 0,ans2 = 0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==1)ans1=i;
        if(a[i]==n)ans2=i;
    }
    int ans=max(abs(n-ans2),abs(ans2-1));
    ans=max(ans,abs(n-ans1));
    ans=max(ans,abs(ans1-1));
    cout<<ans<<endl;
}

//Codeforces Round #354 (Div. 2)
