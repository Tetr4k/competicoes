#include <stdio.h>
int main(){
	int c, p, f;
	scanf("%d%d%d", &c, &p, &f);
	if (p >= c*f) printf("S");
	else printf("N");
	return(0);
}
