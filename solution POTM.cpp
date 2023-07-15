#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define foru(i,a,b) for(int i = a; i <= b; i++)
#define ford(i,a,b) for(int i = a; i >= b; i--)
#define fi first
#define se second
#define endl "\n"
#define blt_cnt __builtin_popcount

typedef pair<int,int> ii;
typedef vector<ii> vii;

const int maxn = 2e5 + 7;
const int oo = 1e9 + 7;
const int MOD = 1e9 + 7;
const int block_size = 750;

void init() {
    if(fopen("main.inp", "r")) {
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int n, q;
ll a[maxn], s[maxn];
void solve() {
    cin >> n >> q;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }

    while(q--) {
        int type, u, k;
        cin >> type >> u >> k;
        if(!type) cout << s[k] << endl;
        else cout << s[u] - s[u - k] << endl;
    }
}

int main() {
    init();
    int t = 1;
    while(t--) {
        solve();
    }
}


