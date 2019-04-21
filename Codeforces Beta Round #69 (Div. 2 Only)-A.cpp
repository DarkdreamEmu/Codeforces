#include <bits/stdc++.h>
using namespace std;

#define max 2000000
int mark[max];
int prime[max];

void sieve()
{
    int i,j,nprime;
    memset(mark,0,sizeof(mark));
    prime[nprime++]=2;
    mark[1]=1;
    mark[2]=0;
    for(i=4; i<max; i+=2)mark[i]=1;
    for(i=3; i*i<max; i+=2)
        if(!mark[i])
        {
            prime[nprime++]=i;
            for(j=i*i; j<max; j+=i*2)
            {
                mark[j]=1;
            }
        }
}


int main()
{
    sieve();
    int n,m;
    while(cin>>n>>m)
    {
        if(prime[m]==1)
        {
            cout<<"NO"<<endl;
        }
        else if(prime[m]!=1)
        {
            int flag=0;
            for(int i=0; i<m; i++)
            {
                if(prime[i]==n&&prime[i+1]==m)
                {
                    cout<<"YES"<<endl;
                    flag=1;
                    break;

                }
            }
            if(flag==0)
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

//Codeforces Beta Round #69 (Div. 2 Only)
