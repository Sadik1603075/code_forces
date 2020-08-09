#include<iostream>
#include<set>
int c[100000];
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int> s;

    for(int i=0;i<n;i++)
      { cin>>a[i];
        c[a[i]]=s.size();
        s.insert(a[i]);
      }

    long long int sum=0;
    for(int i=0;i<=100005;i++)
    {
        sum=sum+c[i];

    }

    cout<<sum;



