#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        for(int i=n/2-1; i>0; i--)
        {
            if(arr[i] <= arr[i-1])
             arr[i-1] = arr[i-1] - arr[i] - 1;
        }
//        for(int i=0; i<n; i++)
//            printf("%d ", arr[i]);
//        cout << endl;
        if(arr[0]< 0)
        {
            printf("No\n");
            continue;
        }

        for(int i=n/2-1; i<n; i++)
        {
//            printf("i: %d\n",i);
            if(arr[i] <= arr[i-1])
                arr[i] = arr[i] - arr[i-1] - 1;
        }
        if(arr[0]< 0)
        {
            printf("No\n");
            continue;
        }
        printf("Yes\n");

//        for(int i=0; i<n; i++)
//            printf("%d ", arr[i]);
//        cout << endl;
    }
    return 0;
}
