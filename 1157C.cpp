#include<bits/stdc++.h>
using namespace std;

int arr[2*100005];
vector<int>num;
vector<string>movv;

int main()
{
    int n,i,j,k=0,last=0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0,j=n-1; i<=j; )
    {

        if(arr[i]<arr[j])
        {
            if(last<arr[i])
            {
                last=arr[i];
                i++;
                movv.push_back("L");
            }
            else if(last<arr[j])
            {
                last = arr[j];
                j--;
                movv.push_back("R");
            }
            else
                break;
        }
        else
        {
             if(last<arr[j])
            {
               last = arr[j];
                j--;
                movv.push_back("R");
            }
            else if(last<arr[i])
            {
                last = arr[i];
                i++;
                movv.push_back("L");
            }
            else
                break;
        }

    }

    cout<<movv.size()<<endl;

    for(i=0; i<movv.size(); i++)
    {
        cout<<movv[i];
    }

}
