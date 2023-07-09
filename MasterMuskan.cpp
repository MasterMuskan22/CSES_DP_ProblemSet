#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.precision(20)
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<ll>
#define vlli vector<lli>
#define vii vector<vector<int>>
#define vlll vector<vector<ll>>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vs vector<string>
#define vss vector<vector<string>>
#define vc vector<char>
#define vcc vector<vector<char>>
#define nl "\n"
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define pr(x) cout<<x<<nl
#define sz(arr) arr.size() 
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,b,a) for(int i=b-1;i>=a;i--)
#define read(n,arr) for(int i=0;i<n;i++) cin>>arr[i]
#define srt(v) sort(begin(v),end(v))
#define srtr(v) sort(rbegin(v),rend(v))
#define rev(v) reverse(arr.begin(),arr.end())
#define debug(x) for(auto it:x) {cout<<it<<" ";}{cout<<endl;}
#define mpdebug(mp) for(auto it:mp){cout<<it.first<<" "<<it.second<<endl;}
#define pb(x) push_back(x)
#define rt(x) return x;

int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
int dr1[8]={-1,-1,0,1,1,1,0,-1};
int dc1[8]={0,1,1,1,0,-1,-1,-1};

const double pie=3.14159265358979323846264338327950;
const ll mod=1e9+7;

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll gcd(ll a,ll b){if(a==0) return b;else return gcd(a-b,b);}
ll lcm(ll a,ll b){ll g=__gcd(a,b);return (1LL*a*b)/g;}
ll sumOfDigits(ll n){ll sum=0;while(n){sum+=n%10;n/=10;}return sum;}
ll getFact(ll n){if(n==0 || n==1) return 1;return n*getFact(n-1);}
ll getLen(ll n){ll cnt=0;while(n){cnt++;n/=10;}return cnt;}
bool cmpvec(vector<int> &v1,vector<int> &v2){if(v1[0]<v2[0]) return 1;else return 0;}
bool isSubstring(string s1, string s2){if (s2.find(s1) != string::npos) return 1;else return 0;}
bool cmppairvec(pll &a,pll &b){if(a.first==b.first) return a.second<b.second;else return a.first>b.first;}
bool getPal(ll n){fast;string x=to_string(n);string t=x;reverse(t.begin(),t.end());rt(x==t);}

/*My code starts from here*/

/*READ THE QUESTION CAREFULLY. UNDERSTAND IT COMPLETELY, THEN MOVE TO CODE
    You'll do it definitely. Don't give up. Work Hard. 
    Feel proud of putting in so much hardwork daily consistently.
    You'll get the best. :)
*/

void MasterMuskan(){
    fast;
    ll n;
    cin>>n;
    vi dp(n+1,0);
    dp[0]=1;
    rep(i,1,n+1){
        rep(j,1,7){
            if(i-j>=0){
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }
    }
    pr(dp[n]);
}

int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    //     MasterMuskan();
    // }
    MasterMuskan();
    return 0;
}

/*My code ends here*/