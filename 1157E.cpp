#include<bits/stdc++.h>
using namespace std;
int a[2*100005];
//int b[2*100005];

multiset<int>b;

int main()
{
    int n,i,j,k,l;

    cin>>n;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&l);
        b.insert(l);
    }
    //multiset<int>::iterator it;



    for(i=0;i<n;i++)
    {
        k = n-a[i];

        auto it = b.lower_bound(k);
        //it = lower_bound(b.begin(),b.end(),k);

        if(it==b.end())
            it = b.begin();
        cout<<(a[i]+*it)%n<<" ";
        b.erase(it);
    }
    cout<<endl;


}
