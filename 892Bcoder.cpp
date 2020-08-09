#include <iostream>
#include <algorithm>
using namespace std;

int a[2007];
int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    int ile = 0;
    for(int i = 1; i <= n; ++i) if(a[i] == 1) ile++;

    if(ile > 0) {
        cout << n - ile << endl;
        return 0;
    }

    int res = n + 1;
    for(int i = 1; i <= n; ++i) {
        int gg = a[i];
        for(int j = i; j <= n; ++j) {
            gg = __gcd(gg, a[j]);
            if(gg == 1) {
                res = min(res, j - i + 1);
                break;
            }
        }
    }

    if(res > n) cout << -1 << endl;
    else cout << res + n - 2 << endl;
    return 0;
}
