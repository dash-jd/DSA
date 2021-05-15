// print first n odd natural numbers
#include<stdio.h>
void printnaturalo(int n){
	if(n==1){
		printf("%d ",n);
		return;
	}	
	else{
		printnaturalo(n-2);
		printf("%d ",n);
	}
}
void printnaturale(int n){
	if(n==1){
		printf("%d ",n);
		return;
	}	
	else{
		printnaturale(n-2);
		printf("%d ",n);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	if(n%2!=0)
	printnaturalo(n);
	else
	printnaturale(n-1);
	
	return 0;
	
}
