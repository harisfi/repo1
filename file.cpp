#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t,x,y,tmp;
	char ca,cb;
	cin>>n;
	int na[n],nb[n];
	for(int i=0;i<n;i++) cin>>na[i];
	for(int i=0;i<n;i++) cin>>nb[i];
	
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>ca>>x>>cb>>y;
		x--;y--;
		if(ca=='A'){
			tmp=na[x];
			na[x]=nb[y];
			nb[y]=tmp;
		}else{
			tmp=nb[x];
			nb[x]=na[y];
			na[y]=tmp;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<na[i];
		if(i!=n-1) cout<<" ";
	}cout<<endl;
	for(int i=0;i<n;i++){
		cout<<nb[i];
		if(i!=n-1) cout<<" ";
	}cout<<endl;
	return 0;
}