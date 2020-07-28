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
	int test;
	cin >> test;
	//test=1;
	while(test--)
	{
		ll n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        string s;
        getline(cin,s);
        int a[26]={0},mx=0;
        fo(i,n) a[s[i]-'a']++,mx=max(mx,a[s[i]-'a']);
        int mn=INT_MAX,in=26;
        fo(i,26)
        {
            if(a[i]==mx)
            {
                int ds=0,f=-1;
                for(int j=0;j<n;j++)
                {
                    if(i==s[j]-'a' && f==-1)
                    {
                        f=j;
                        ds=1;
                    }
                    else if(i==s[j]-'a')
                    {
                        ds=j-f+1;
                    }
                }
                if(mn>ds)
                {
                    in=i;
                    mn=ds;
                }
            }
        }
        cout << (char)(in+'a') << " " << mn << endl;
	}
    return 0;
}



