#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<(k&&k<n)<<" "<<min(n-k,2*k);
}
