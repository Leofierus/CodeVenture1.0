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
ll fact(ll n)
{
    if(n==0)
    {
        ll c=1;
        return c;
    }
    else
    {
        return n*fact(n-1);
    }
}
ll comb(ll n,ll x)
{
    return (fact(n)/(fact(n-x)*fact(x)));
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
        cin>>n;
        ll a[n],e=0,o=0,esum=0,osum=0;
        fo(i,n)
        {
            cin >> a[i];
            if(a[i]%2==0) e++, esum+=a[i];
            else 		  o++, osum+=a[i];
        }
        ll ecom=0,ocom=0,x=0,et=0,ot=0;
        while(x<e) ecom+=(comb(e-1,x)), x++;
        x=0;
        while(x<o) ocom+=(comb(o-1,x)), x+=2;
        x=1;
        while(x<=o) ot+=(comb(o,x)), x+=2;
        x=1;
        while(x<=e) et+=(comb(e,x)), x++;
        cout << (esum*ecom*ot)+((et+1)*osum*ocom) << endl;
    }
    return 0;
}



