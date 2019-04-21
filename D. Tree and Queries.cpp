#include "bits/stdc++.h"
using namespace std;

#define MAX 100005

struct node{
	int L,R,k,ind;
};

int startTime[MAX],endTime[MAX],ar[MAX],curTime=0,Block;
vector<int>g[MAX];
vector< node >Query;
int color[MAX];
int ans[MAX];
int particularColor[MAX],cnt[MAX];

void dfs(int u,int par){
	curTime++;
	ar[curTime]=u;
	startTime[u]=curTime;
	for(int i=0; i<g[u].size(); i++){
		int v=g[u][i];
		if(v==par)continue;
		dfs(v,u);
	}
	endTime[u]=curTime;
}

bool cmp(node a, node b){
	if(a.L/Block==b.L/Block)return a.R<b.R;
	else return a.L/Block<b.L/Block;
}

void remove(int pos){
	int curColor = color[ ar[pos] ];
	cnt[ particularColor[curColor] ]--;
	particularColor[curColor]--;
}

void add(int pos){
	int curColor = color[ ar[pos] ];
	particularColor[curColor]++;
	cnt[ particularColor[curColor] ]++;
}

int main(){
	int n,q;
	scanf("%d %d",&n,&q);
	Block=sqrt(n);
	for(int i=1; i<=n; i++){
		scanf("%d",&color[i]);
	}
	for(int i=0; i<n-1; i++){
		int u,v;
		scanf("%d %d",&u,&v);
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1,-1);
	for(int i=0; i<q; i++){
		int u,k;
		scanf("%d %d",&u,&k);
		int L = ar[u];
		int R = endTime[ startTime [L] ];
		Query.push_back({L,R,k,i});
	}
	sort(Query.begin(),Query.end(),cmp);
	int curL=Query[0].L,curR=curL-1;
	for(int i=0; i<q; i++){
	//	cout<<Query[i].L<<" "<<Query[i].R<<" "<<Query[i].k<<" "<<curL<<" "<<curR<<" "<<endl;
		while(curL<Query[i].L){
			remove(curL);
			curL++;
		}
		while(curR<Query[i].R){
			curR++;
			add(curR);
		}
		while(curL>Query[i].L){
			curL--;
			add(curL);
		}
		while(curR>Query[i].R){
			remove(curR);
			curR--;
		}
		ans[Query[i].ind]=cnt[ Query[i].k ];
	}
	for(int i=0; i<q; i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}

