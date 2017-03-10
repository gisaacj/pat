#include<stdio.h>
int main(){
	int n,i=0;
	scanf("%d",&n);
	while(n!=1){
		n=n%2==1?(n*3+1)/2:n/2;
		i++;
	}
	printf("%d",i-1);
} 
