#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define pb push_back
#define llu unsigned long long int
#define fo(i,n) for(int i=0;i<n;i++)
#define eb emplace_back
#define M 1000000007
#define vi vector<int>
#define vlli vector<lli>
#define pi pair<int,int>
#define mp make_pair
#define mapi map<int,int>
ll max(ll x,ll y)
{
	if(x>y)
		return x;
	return y;
}
ll min(ll x,ll y)
{
	if(x<y)
		return x;
	return y;
}
void yes()
{
	cout << "YES" << endl;
}
void no()
{
	cout << "NO" << endl;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    //const unsigned int M=1000000007;
	ll test,ans=0;
	cin >> test;
	//test=1;
    while(test--)
    {
        ll n,cnt=0;
        cin >> n;
        vector<ll> a(n);
        fo(i,n) cin>>a[i];
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int i=0,x=1;
        while(x<=n && i<n)
        {
            if(i==0) cnt+=a[i], x++;
            else
            {
                cnt+=a[i];
                x++;
				if(x==n) break;
                cnt+=a[i];
                x++;
				if(x==n) break;
            }
            i++;
            if(x==n) break;
        }
        ans = max(ans,cnt);
        // cout<<cnt<<endl;
    }
    cout << ans << endl;
    return 0;
}



