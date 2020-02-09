//ตÝน้_fib
#include <iostream>
using namespace std;

int fib(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	else
		return fib(n-1)+fib(n-2);
}

int fib_tail(int n, int a, int b){
	if(n>0){
		n--;
		fib_tail(n, a+b, a);
	}
//	if(n>0){
//		int t = a;
//		a = a+b;
//		b = t;
//		n--;
//		fib_tail(n, a, b);
//	}
	else
		return b;
}

int fib_loop(int n){
	int a, b;
	int t;
	for(int i=0; i<n+1; i++){
		t = a;
		a = a+b;
		b = t;
	}
	return b;
}

int main()
{
	cout << fib(7) << endl;
	cout << fib_tail(7,1,0) << endl;
	cout << fib_loop(7) << endl;
	
	return 0;
} 
