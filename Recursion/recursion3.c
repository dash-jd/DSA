// print first n  even natural numbers
#include<stdio.h>
void printnaturale(int n)
{
	if(n==2){
		printf("%d ",n);
	return;
	}
	else {
		
			printnaturale(n-2);
		printf("%d ",n);
	}
}
void printnaturalo(int n)
{
	if(n==2){
		printf("%d ",n);
	return;
	}
	else {
		printnaturalo(n-2);
		printf("%d ",n);
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
