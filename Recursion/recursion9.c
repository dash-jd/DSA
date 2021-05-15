//sum of first odd n natural numbers
#include<stdio.h>
int sum(int n){
	if(n==1){
		return n;
	}
	else{
		return n+sum(n-2);
	}
}
int main(){
	int n,x=0;
	scanf("%d",&n);
	if(n%2==0)
		printf("No is even, Please Enter a valid(odd) no");
	x=sum(n);
	printf("sum is :%d",x);
	return 0;
}
