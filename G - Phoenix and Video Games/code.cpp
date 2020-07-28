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
int primeFactors(int n)
{
    ll sum=0;
    sum=0;
    if(n%2==0) sum=2;
    while(n%2==0) n /= 2;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(n%i==0) sum += i;
        while(n%i==0) n/=i;
    }
    if(n>1) sum+=n;
    return sum;
}
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    //const unsigned int M=1000000007;
	ll test;
	cin >> test;
	//test=1;
    while(test--)
    {
    	ll m;
        cin >> m;
        cout << primeFactors(m) << endl;
    }
    return 0;
}



