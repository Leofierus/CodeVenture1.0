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
long double a[40][40],x[40],b;
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
ll divisors(ll n)
{
    ll sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            sum += i;
            if(n/i != i) sum += n/i;
        }
    }
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
    	ll n;
    	cin >> n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=(n+1);j++)
                cin >> a[i][j];

        ll sum=0;
        for(int j=1; j<=n; j++) 
			for(int i=1; i<=n; i++) 
	            if(i!=j) {
	                b = a[i][j]/a[j][j];
	                for(int k=1; k<=n+1; k++) a[i][k]=a[i][k]-b*a[j][k];
	            }

        for(int i=1; i<=n; i++) x[i]=a[i][n+1]/a[i][i], sum+=((double)x[i]);
        sum=abs(sum);
        cout << divisors(sum) << endl;
    }
    return 0;
}



