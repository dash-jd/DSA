#include<stdio.h>
int sumofdig(int n){
	if(n==0)
		return n;
	else{
		n=(n%10)+sumofdig(n/10);
		return n;
	}
}
int main(){
	int n,x;
	scanf("%d",&n);
	x=sumofdig(n);
	printf("%d",x);
	return 0;
}
