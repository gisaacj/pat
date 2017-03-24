#include<stdio.h>
#include<math.h>
int isPrime(int n){
	int i;
	if(n == 0 || n == 1) 
		return 0;
	else if(n == 2 || n == 3) 
		return 1;
	else{
		for(i = 2;i <= sqrt(n);i++){
			if(n%i == 0)  
				return 0;
		}
	}
	return 1;
}
int main(){
	int i,a[10100],m,n,j = 2;
	scanf("%d %d",&m,&n);
	for(i = 1;i <= n;i++){
		while(1){
			if(isPrime(j)){
				a[i] = j;
				j++;
				break;
			}
		j++;
		}
	}
	int count = 0;
	for(i = m;i < n;i++){
		count++;
		if(count%10 == 0){
			printf("%d\n",a[i]);
		}
		else{
			printf("%d ",a[i]);
		}
	}
	printf("%d\n",a[i]);
	return 0;
}
