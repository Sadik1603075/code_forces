#include<bits/stdc++.h>
using namespace std;

int arr[2*100005];
vector<int>num;
vector<string>movv,movv1;

int main()
{
    int n,i,j,k=0,last=0,p=0;
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
        else if (arr[i]==arr[j]&& last<arr[i])
        {
            last = arr[i];
            i++;
            movv.push_back("L");
            p=1;

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


    last =0;
    for(i=0,j=n-1; i<=j; )
    {

        if(arr[i]<arr[j])
        {
            if(last<arr[i])
            {
                last=arr[i];
                i++;
                movv1.push_back("L");
            }
            else if(last<arr[j])
            {
                last = arr[j];
                j--;
                movv1.push_back("R");
            }
            else
                break;
        }
        else if (arr[i]==arr[j]&& last<arr[i])
        {
            last = arr[j];
            j--;
            movv1.push_back("R");

        }
        else
        {
            if(last<arr[j])
            {
                last = arr[j];
                j--;
                movv1.push_back("R");
            }
            else if(last<arr[i])
            {
                last = arr[i];
                i++;
                movv1.push_back("L");
            }
            else
                break;
        }

    }

    if(movv.size()>=movv1.size())

    {
        cout<<movv.size()<<endl;
        for(i=0; i<movv.size(); i++)
        {
            cout<<movv[i];
        }

    }
    else
    {
        cout<<movv1.size()<<endl;

        for(i=0; i<movv1.size(); i++)
        {
            cout<<movv1[i];
        }
    }

}

