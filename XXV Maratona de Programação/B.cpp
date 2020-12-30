#include <iostream>
#include <list>
using namespace std;

struct navio{
	int X1, X2, Y1, Y2, di;
};

main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, D, L, R, C;
	struct navio b, d;
	cin >> a;
	list<struct navio> n, m;
	for(int x=0; x<a; x++){
		cin >> D >> L >> R >> C;
		b.X1 = R;
		b.Y1 = C;
		if(D == 1){
			b.X2 = R+L-1;
			b.Y2 = C;
			b.di = 1;
		}
		else{
			b.X2 = R;
			b.Y2 = C+L-1;
			b.di = 0;
		}
		n.push_back(b);
	}
	while(!n.empty()){
		b = n.back();
		n.pop_back();
		m = n;
		if(b.X2 > 10 || b.Y2 > 10){
			cout << "N" << endl;
			return 0;
		}
		while(!m.empty()){
			d = m.back();
			m.pop_back();
			if(d.di == b.di){
				if(d.di==1 && d.X1 <= b.X2 && d.Y1 == b.Y1){
					cout << "N" << endl;
					return 0;
				}
				if(d.di==0 && d.Y1 <= b.Y2 && d.X1 == b.X1){
					cout << "N" << endl;
					return 0;
				}
			}
			else{
				if(d.di==1 &&  d.X1 <= b.X2 && d.X2 >= b.X1 && d.Y1 == b.Y1){
					cout << "N" << endl;
					return 0;
				}
				if(d.di==0 &&  d.Y1 <= b.Y2 && d.Y2 >= b.Y1 && d.X1 == b.X1){
					cout << "N" << endl;
					return 0;
				}
			}
		}
	}
	cout << "Y" << endl;
}
