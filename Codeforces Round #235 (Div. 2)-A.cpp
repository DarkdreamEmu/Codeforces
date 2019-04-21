#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    while(cin>>n>>x)
    {
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        int count=0;
        while(sum!=0)
        {
            if(sum>0)
            {
                if(sum-x>0)
                {
                    sum=sum-x;
                    count++;
                }
                else
                {
                    sum=0;
                    count++;
                }
            }
            else
            {
                if(sum+x<0)
                {
                    sum=sum+x;
                    count++;
                }
                else
                {
                    sum=0;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

//Codeforces Round #235 (Div. 2)--A
