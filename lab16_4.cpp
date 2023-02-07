#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &A,int &B,int &C,int &D){
	int a[4];
	a[0] = A , a[1] = B , a[2] = C , a[3] =D;

	int b[4];

	int x=rand()%4;
	b[0]=a[x];
	a[x]=0;

	int y=0;
	do{
		y=rand()%4;
	}while(a[y]==0);
	b[1]=a[y];
	a[y]=0;

	int z=0;
	do{
		z=rand()%4;
	}while(a[z]==0);
	b[2]=a[z];
	a[z]=0;

	int p=0;
	do{
		p=rand()%4;
	}while(a[p]==0);
	b[3]=a[p];
	a[p]=0;

	A=b[0],B=b[1],C=b[2],D=b[3];
}
