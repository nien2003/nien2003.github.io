#include <iostream>
#include <math.h>
using namespace std;
void Nhap( int a [] , int n){
	for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}

void Xuat( int a [] , int n){
	for (int i = 0; i < n; i++) {
        cout << "\t "<< a[i];
    }
}


int max(int a[], int n ){
	int max = 0;
		for (int i = 0; i < n; i++) {
			if( max < a[i]){
				max = a[i];
			}	
		}
		cout<<" \n Gia tri lon nhat la : "<< max;
}

int Timsolanxuathien(int a[],int n){
	int max=0;
	int dem=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])	{	
		dem++;
				if(dem>max){
					max=dem;
				}		
		}
		else{	
           dem=1;
		}
	}
	cout<< " \nso lan xuat hien :" <<max;

}

int main(){
    int a[50];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Nhap(a, n);
    Xuat(a,n);
    max(a,n);
    Timsolanxuathien(a,n);
    return 0;
}
