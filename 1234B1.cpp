#include<bits/stdc++.h>
using namespace std;


deque<int>p;
map<int,bool>s;


int main()
{
    int n,k,m,i,c=0,l,x;
    cin>>n>>k;

    for(i=0; i<n; i++)
    {
        scanf("%d",&l);

        if(s[l]==false)
        {
            if(p.size()!=k)
            {
                p.push_front(l);
                s[l]=true;
            }

            else
            {
                int z = p.back();

                s[z]=false;
                p.pop_back();

                p.push_front(l);

                s[l]=true;
            }
        }
    }




    std::deque<int>::iterator itt;
    cout<<p.size()<<endl;

    for(itt=p.begin(); itt!=p.end(); ++itt)
    {
        cout<<*itt<<" ";
        p.pop_front();
    }
    printf("\n");
    return 0;

}
