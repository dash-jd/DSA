// print first n odd natural numbers in reverse
#include<stdio.h>
void printnaturalo(int n){
	if(n==1){
		printf("%d ",n);
		return;
	}	
	else{
		printf("%d ",n);
		printnaturalo(n-2);
		
	}
}
void printnaturale(int n){
	if(n==1){
		printf("%d ",n);
		return;
	}	
	else{
		printf("%d ",n);
		printnaturale(n-2);
	
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
