#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;

	while(t--)
	{
	int n,a;
	cin>>n>>a;
	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int r = unique(v.begin(),v.end()) - v.begin();
	if(r<a)
	{
		cout<<"Bad"<<'\n';
	}
	else if(r==a)
	{
		cout<<"Good"<<'\n';
	}
	else
	{
		cout<<"Average"<<'\n';
	}
	}
}
