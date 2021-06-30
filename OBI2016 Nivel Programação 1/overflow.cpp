#include <stdio.h>
int main() {
  int n, p, q, total;
  char o;
  scanf("%d", &n);
  scanf("%d %c %d", &p, &o, &q);
  if (o == '+') total = p + q;
  else total = p * q;
  if (total > n) printf("OVERFLOW");
  else printf("OK");
  return 0;
}
