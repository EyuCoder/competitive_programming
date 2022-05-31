/*
 * Author: GoofyCat
 * eyucoder.com
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int N;
ll x, mx, sum;

int main() {
  cin >> N;
  cin >> mx;
  for (int i = 1; i < N; i++) {
    cin >> x;
    mx = max(mx, x);
    sum += (mx - x);
  }
  cout << sum;
}