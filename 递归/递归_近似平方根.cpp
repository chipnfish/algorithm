//牛顿逼近法求平方根
//求平方根	guess = (guess + x/guess)/2
//求立方根 	guess = (guess*2 + x/guess*guess)/3
#include <iostream>
#include <algorithm>
using namespace std;

double mySqrt(double guess, int x){
	if(abs(x-guess*guess)<0.001){
		return guess;
	}
	else{
		guess = (guess + x/guess)/2;
		mySqrt(guess,x);
	}
}

double mySqrt2(double guess, int x){
	while(abs(x-guess*guess)>=0.001){
		guess = (guess + x/guess)/2;
	}
	return guess;
} 

double myCurt(double guess, int x){
	if(abs(x-pow(3,guess)<0.001))  //pow(3,x) 表示x的三次方     
		return guess;
	else{
		guess = (guess*2 + x/guess*guess)/3;
		myCurt(guess, x);
	}
}

int main()
{
	double x;
	cin >> x;
	cout << mySqrt(1.0, x) << endl;
	cout << mySqrt2(1.0, x) << endl; 
	cout << myCurt(1.0, 27) << endl;
	
	return 0;
} 

//递归爆栈可以使用尾递归进行优化（编译器优化尾递归程序，使得尾递归程序不会栈溢出） 
//https://www.ruanyifeng.com/blog/2015/04/tail-call.html
