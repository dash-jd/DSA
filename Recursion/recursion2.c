// print first n  natural numbers in reverse
#include<stdio.h>
void printnatural(int n)
{
	if(n==1){
		printf("%d",n);
	return;
	}
	else {
		printf("%d ",n);
		printnatural(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printnatural(n);
}
