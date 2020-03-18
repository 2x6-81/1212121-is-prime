/*
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define ls(x) (x << 1)     // left son
#define rs(x) (x << 1 | 1) // right son
const int N=1e5+5;
int tre[N<<2], tag[N<<2];
int n;
// tre[x] = tre[ls(x)] + tre[rs(x)];
void up_upd(int x) {
    tre[x] = tre[ls(x)] + tre[rs(x)];
}
void build(int now, int l, int r) {
    tag[now] = 0;
    tre[now] = r - l + 1;
    if(l == r) return;
    int mid = (l + r) >> 1;
    build(ls(now), l, mid);
    build(rs(now), mid+1, r);
}
void _upd(int x, int l, int r) {
    tag[x] ^= 1;
    tre[x] = (r - l + 1) - tre[x];
}
void down_upd(int x, int l, int r) {
    int mid = (l + r) >> 1;
    _upd(ls(x), l, mid, tag[x]);
    _upd(rs(x), mid + 1, r, tag[x]);
    tag[x] = 0;
}
void upd(int now, int l, int r, int l_Now, int r_Now) {
    if(l <= l_Now && r_Now <= r) { _upd(now, l_Now, r_Now, k); return; }
    int mid = (l_Now + r_Now) >> 1;
    down_upd(now, l_Now, r_Now);
    if(l <= mid) upd(ls(now), l, r, l_Now, mid, k);
    if(mid < r) upd(rs(now), l, r, mid+1, r_Now, k);
    up_upd(now);
}
LL query(int now, int l, int r, int l_Now, int r_Now) {
    if(l <= l_Now && r_Now <= r) return tre[now];
    LL sum = 0ll; int mid = (l_Now + r_Now) >> 1;
    down_upd(now, l_Now, r_Now);
    if(l <= mid) sum += query(ls(now), l, r, l_Now, mid);
    if(mid < r) sum += query(rs(now), l, r, mid + 1, r_Now);
    return sum;
}
int main() {
    int T; scanf("%d%d",&n,&T);
    for(int i=1;i<=n;i++) scanf("%lld", A+i);
    build(1, 1, n);
    LL k;
    for(int op,l,r;T--;) {
        scanf("%d%d%d",&op,&l,&r);
        if(op==1) scanf("%lld",&k), upd(1, l, r, 1, n, k);
        else printf("%lld\n", query(1, l, r, 1, n));
    }
    return 0;
}
*/
#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;
int main() {
    for(int i = 0; i < 10; i++) printf("%d\n\a", i), Sleep(1000);
}