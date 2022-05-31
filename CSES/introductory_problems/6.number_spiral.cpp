/*
 * Author: GoofyCat
 * eyucoder.com
 */

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll x, y;

ll solve(ll x, ll y) {
  ll l = max(x, y) - 1;
  if (l & 1) {
    if (x < y)
      return l * l + x;
    else
      return l * l + 2 * l - y + 2;
  } else {
    if (x < y)
      return l * l + 2 * l - x + 2;
    else
      return l * l + y;
  }
}

int main() {
  int n;
  scanf("%d", &n);
  for (int t = 0; t < n; t++) {
    scanf("%lld %lld", &x, &y);
    printf("%lld\n", solve(x, y));
  }
}