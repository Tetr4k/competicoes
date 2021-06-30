#include <stdio.h>
int main(){
	int a, b, c, aux;
	scanf("%d%d%d", &a, &b, &c);
	//if ((a>b && a<c) || (a<b && a>c)) printf("%d", a);
	//if ((b>a && b<c) || (b<a && b>c)) printf("%d", b);
	//if ((c>a && c<b) || (c<a && c>b)) printf("%d", c);
		
	if (a<b){
		aux=a;
		a=b;
		b=aux;}
	if (b<c){
		aux=b;
		b=c;
		c=aux;}
	printf("%d", b);	
	
}
