//递归_阶乘
#include <iostream>
using namespace std;

int factorial(int n){
	if(n==0 || n==1)
		return 1;
	else
		return n*factorial(n-1);	
} 

int factorial_tail(int n, int i, int product){  //将用到的比变量作为函数参数从而实现尾递归 
	if(i<n+1){
		product *= i;
		i++;
		factorial_tail(n, i, product);
	}
	else
		return product;
/*	
int factroial(int n){
	int product = 1;
	for(int i=1; i<n+1; i++){
		product *= i;
	}
	return product;
}
*/
}

int main()
{
	cout << factorial(5) << endl;
	cout << factorial_tail(5, 1, 1) << endl;
	
	return 0;
} 
//循环--->递归
//循环更能变为尾递归 
