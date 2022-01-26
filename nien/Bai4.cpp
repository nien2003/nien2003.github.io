#include <iostream>
#include <math.h>
using namespace std;
void Check (int n){
	if(n >0 && n <= 1000000){
		
	}else {
		cout<<"N";
		exit(0);
	}
}


int main(){
	int a,b,sum = 0;
		cout<<" Nhap a :";
		cin>>a;
		Check(a);
		cout<<" Nhap b :";
		cin>>b;
		Check(b);
			sum = a + b;
	cout<<sum;
	return 0;
}

