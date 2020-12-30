#include <iostream>
using namespace std;
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int C, v;
	long long int s=100, maior=100;
	cin >> C;
	for(int x=0; x<C; x++){
		cin >> v;
		s=s+v;
		if(s>maior) maior=s;
	}
	cout << maior << endl;
}
