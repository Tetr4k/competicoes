#include <stdio.h>

int main(){
	int N1, N2, D1, D2, V1, V2;	
	scanf("%d%d%d%d%d%d", &N1, &D1, &V1, &N2, &D2, &V2);
	if (double(D1) / V1 < double(D2) / V2) printf("%d", N1);
	else printf("%d", N2);
	return(0);
}
