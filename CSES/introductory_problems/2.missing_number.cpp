#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, xn;

  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    xn ^= i;

  for (int i = 0; i < n - 1; i++) {
    scanf("%d", &x);
    xn ^= x;
  }
  printf("%d\n", xn);
}