#include<stdio.h>
int main(){
	int i,num,a[3]={0};
	scanf("%d",&num);
	while(num!=0){
		a[i]=num%10;
		num/=10;
		i++;
	}
	for(i=0;i<a[2];i++)
		printf("B");
	for(i=0;i<a[1];i++)
		printf("S");
	for(i=0;i<a[0];i++)
		printf("%d",i+1);
}
