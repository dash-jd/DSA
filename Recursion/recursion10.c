//sum of square of first n natural numbers
#include<stdio.h>
int sumofsquare(int n){
	if(n==1){
		return n;		
	}
	else{
		return n*n + sumofsquare(n-1);
	}
}
int main(){
	int n,x;
	scanf("%d",&n);
	x=sumofsquare(n);
	printf("Ans is:%d",x);
	return 0;
}
