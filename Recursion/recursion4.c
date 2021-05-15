// print first n  even natural numbers in reverse
#include<stdio.h>
void printnaturale(int n)
{
	if(n==2){
		printf("%d ",n);
	return;
	}
	else {
		printf("%d ",n);
			printnaturale(n-2);
		
	}
}
void printnaturalo(int n)
{
	if(n==2){
		printf("%d ",n);
	return;
	}
	else {
		printf("%d ",n);
		printnaturalo(n-2);
		
	}
}
int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0)
		printnaturale(n);
	else
		printnaturalo(n-1);
}
