#include <iostream>
using namespace std;

int bsearch(int a[], int len, int x){
	int low = 0, high = len-1, mid = (low+high)/2;
	while(low<=high){
		if(a[mid]>x)
			high = mid-1;
		else if(a[mid]<x)
			low = mid+1;
		else
			return mid;
		mid = (low+high)/2;   //要不停的更新 mid 
	}
	return -1;
}

int main()
{
	int a[] = {2,5,7,9,13,45,100,200,999};
	int	pos = bsearch(a,sizeof(a)/sizeof(int),999);
	printf("%d", pos);	
	
	return 0;
} 
