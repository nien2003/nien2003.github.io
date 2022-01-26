#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n , sum = 0;
	cout<<" Nhap n :";
	cin >> n ;
	for(int i = 0 ; i <= n ; i++){
		if(i % 4 == 0  && i % 5 != 0){
			sum = sum + i ;
		}
	}
	cout<<sum;
	return 0;
}
