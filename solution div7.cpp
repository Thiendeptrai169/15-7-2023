#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL);
#define FF first
#define SS second
#define eps 1e-9
#define PI aocs(-1.0)
// VECTOR (6)
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define lb lower_bound
#define ub upper_bound
#define uniq(x) sort(all((x))), (x).resize(unique(all((x))) - (x).begin());
// BIT (6)
#define BIT(x, i) (((x)>>(i))&1)
#define MASK(i) (1LL<<(i))
#define CNTBIT(x) __builtin_popcountll(x)
#define ODDBIT(x) __builtin_parityll(x)
#define SUBSET(big, small) (((big)&(small))==(small))
#define FIRSTBIT(x) __builtin_ctzll(x)
//typedef
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> ii;

/* */
template <class T>
bool minimize(T &a, const T &b) {
    if(a > b) {a = b; return 1;}
    return 0;
}
template <class T>
bool maximize(T &a, const T &b) {
    if(a < b) {a = b; return 1;}
    return 0;
}
/* */

/* CODE BELOW */
const int N = 5e5 + 7, M = 1e9 + 7;
const int MOD = 1e9 + 7;
const int oo = 1e9 + 7;

int n, a[N];
int p[N], f[N];
int cnt[7][7];

signed main() {
    fastIO;
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        p[i] = (p[i-1] + a[i]) % 7;
        f[i] = (f[i-1] + a[i] * p[i-1]) % 7;
    }

    ll ans = 0;
    for(int i=1;i<=n;i++) {
        cnt[p[i-1]][f[i-1]]++;
        for(int j=0;j<7;j++) for(int k=0;k<7;k++) {
            if((f[i] - p[i]*j + j*j - k + 49) % 7 == 0) {
                ans+= cnt[j][k];
            }
        }
    }
    cout << ans;

    return 0;
}