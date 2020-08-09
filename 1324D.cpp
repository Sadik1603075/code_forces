#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define ll long long

using namespace std;
using namespace __gnu_pbds;

template <typename T>  using orderedSet =
  tree<T, null_type, less<T>,   /// greater<T> for sorting decreasingly
    rb_tree_tag, tree_order_statistics_node_update>;


ll a[200005];
ll b[200005];


int main()

{
     orderedSet <pair<ll,ll>> os;

    ll i,j,k,l,m,n,sum=0;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        scanf("%lld",&a[i]);
    }

    for(i=1; i<=n; i++)
    {
        scanf("%lld",&b[i]);
    }
    k =1;
    for(i=n;i>=1;i--)
    {
        l = a[i]-b[i];
        j =l;
        if(l>0)
        {
           l = l*-1;
           l++;
        }
        else if(l<0)
        {
            l = abs(l);
            l++;
        }
        else
        {
            l++;
        }
        sum += os.size()-os.order_of_key(make_pair(l,0));

        //cout<<sum<<"  == "<<j<<" =  "<<os.order_of_key(make_pair(l,0))<<endl;
        os.insert(make_pair(j,k));
        k++;
    }
    cout<<sum<<endl;
}
