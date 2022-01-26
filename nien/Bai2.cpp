#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n , sum = 0 ;
	do {
		cout<<" Nhap n :";
		cin >>n;
	}while (0 < n && n >= 100);
	for(int i = 1 ; i <= n ; i ++){
		sum = sum + pow(i,(i+1));
	}
	cout<<sum;
	return 0;
}
