//sum of first n natural numbers
#include<stdio.h>
int sum(int n){
	if(n==1){
		return n;
	}
	else{
		return n+sum(n-1);
	}
}
int main(){
	int n,x=0;
	scanf("%d",&n);
	x=sum(n);
	printf("sum is :%d",x);
	return 0;
}
