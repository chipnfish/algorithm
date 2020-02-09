//ţ�ٱƽ�����ƽ����
//��ƽ����	guess = (guess + x/guess)/2
//�������� 	guess = (guess*2 + x/guess*guess)/3
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
	if(abs(x-pow(3,guess)<0.001))  //pow(3,x) ��ʾx�����η�     
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

//�ݹ鱬ջ����ʹ��β�ݹ�����Ż����������Ż�β�ݹ����ʹ��β�ݹ���򲻻�ջ����� 
//https://www.ruanyifeng.com/blog/2015/04/tail-call.html
