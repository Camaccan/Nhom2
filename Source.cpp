#include <iostream>
#include <stdio.h>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
void ktcp(int a){
	
	int n=a;
	int i=0;
	while (i*i<=n){
		if(i*i==n){
		cout<<"la so chinh phuong";
		i++;
		}
		else{
		cout<<"khong la so chinh phuong";
		}
	}
}
int main()
{
	int a =2,b=3;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong ="<<a + b;
	cout<<"A";
	cout<<"Tich ="<<a*b;
	cout<<"B";
	ktcp(a);
	system("pause");
	return 0;
}