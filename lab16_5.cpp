#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *q,int *w,int *e,int *r) {
	int sf[4]={*q,*w,*e,*r} ;
	for (int i = 0; i < 4 ; i++){
		int a = rand()%4, b = rand()%4;
		swap(sf[a],sf[b]) ;
	}
	*q = sf[0];
	*w = sf[1];
    *e = sf[2];
	*r = sf[3];
}
