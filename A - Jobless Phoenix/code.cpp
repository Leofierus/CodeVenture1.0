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

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    //const unsigned int M=1000000007;
	int test;
	cin >> test;
	//test=1;
	while(test--)
	{
		ll n;
		cin >> n;
    	cout << setbit(n) << endl;
	}
    return 0;
}



