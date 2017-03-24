#include<stdio.h>
int ss(int i){
	int j;
	if(i<=1)
		return 0;
	if(i==2)
		return 1;
	for(j=2;j<i/2+1;j++){
		if(i%j==0)
			return 0;
		if(j==i/2+1)
			return 1;
	}
}
int main(){
	int i=0,j=0,m,n;
	scanf("%d %d",&m,&n);
	while(1){
		i++;
		if(ss(i)){
			j++;
			if(j>=m&&j<n)
				printf("%d%c",i,(j-m)%10==9?'\n':' ');
			if(j==n){
				printf("%d",i);
				return 0;
			}
		}
	}
}
