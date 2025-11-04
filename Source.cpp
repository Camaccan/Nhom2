#include <iostream>
#inclue <math.h> 

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool ktsnt(int n){
    if (n<2) return false;
    for (int i =2; i<= sqrt (n) ;i++)
        if(n%i==0)
            return false;
    return true;
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
	system("pause");
	return 0;
}