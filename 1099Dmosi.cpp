#include<bits/stdc++.h>

using namespace std;

#define ll       long long

#define  sci(x)   scanf("%d", &x)
#define  scl(x)   scanf("%lld", &x)
#define  scd(x)   scanf("%lf", &x)

#define  pfi(x)   printf("%d", x)
#define  pfl(x)   printf("%lld", x)
#define  pfd(x)   printf("%lf", x)
#define  pfc(x)   printf("Case %d: ", x++)
#define  ps       printf(" ")
#define  pn       printf("\n")

#define  pb       push_back
#define  ppb      pop_back
#define  pf       push_front
#define  ppf      pop_front
#define  In       insert
#define  All(a)   a.begin(), a.end()

std::vector<int> edges[100005];
ll s[100005];
ll ans[100005];
ll minim[100005];
int n;
bool impossible;

void check(int u, ll val)
{
	if(s[u] != -1 && val > s[u])
	{
		impossible = true;
		return;
	}
	if(impossible)
		return;

	ll add = 0;
	if(s[u] != -1)
		add = s[u] - val;

	for(int i = 0; i < edges[u].size(); i++)
		check(edges[u][i], val + add);
}

ll minFind(ll u, ll val)
{
	if(edges[u].size() == 0)
	{
		if(s[u] == -1)
			return minim[u] = val;
		else
			return minim[u] = max(s[u], val);
	}
	val = max(val, s[u]);
	ll ret = INT_MAX;
	for(int i = 0; i < edges[u].size(); i++)
		ret = min(ret, minFind(edges[u][i], val));
	if(s[u] == -1)
		return minim[u] = ret;
	else
		return minim[u] = min(ret, s[u]);
}

void assign(int u, ll val)
{
	ll need = minim[u] - val;
	if(s[u] == -1)
	{
		ans[u] = max(need, 0LL);
	}
	else
		ans[u] = s[u] - val;
	//cout << u << ' ' << ans[u] << endl;
	for(int i = 0; i < edges[u].size(); i++)
		assign(edges[u][i], val + ans[u]);
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	sci(n);

	int p, i;
	for(i = 2; i <= n; i++)
	{
		sci(p);
		edges[p].pb(i);
	}

	for(i = 1; i <= n; i++)
		scl(s[i]);

	check(1, 0);

	if(impossible)
		printf("-1\n");
	else
	{
		minFind(1, 0);

		assign(1, 0);
		ll sum = 0;
		for(i = 1; i <= n; i++)
			sum += ans[i];

		printf("%lld\n", sum);
	}
    return 0;
}
