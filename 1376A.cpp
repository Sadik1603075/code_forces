#include <bits/stdc++.h>
using namespace std;
int arr[3000005];

int main() {

	int n,i;
	cin>>n;

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sort(arr,arr+n);

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}
