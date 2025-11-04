#include <iostream>
<<<<<<< HEAD
#include <stdio.h>
=======
#inclue <math.h> 

>>>>>>> 61cbd424b791dc2a85ca0a1fe21e19e726413c31
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
<<<<<<< HEAD
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
=======
bool ktsnt(int n){
    if (n<2) return false;
    for (int i =2; i<= sqrt (n) ;i++)
        if(n%i==0)
            return false;
    return true;
>>>>>>> 61cbd424b791dc2a85ca0a1fe21e19e726413c31
}
int main()
{
	int a =2,b=3;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong ="<<a + b;
	cout<<"So nguyen to" ;
	ktsnt(2);
	cout<<"A";
	cout<<"Tich ="<<a*b;
	cout<<"B";
	ktcp(a);
	system("pause");
	return 0;
}