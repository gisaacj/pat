#include<stdio.h>
struct STU{
	char name[11];
	char id[11];
	int score;
}st[10000];
int main(){
	int i,n,min,max,min1,max1;
	min=101;
	max=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s %d",st[i].name,st[i].id,&st[i].score);
		if(st[i].score>max){
			max=st[i].score;
			max1=i;
		}
		if(st[i].score<min){
			min=st[i].score;
			min1=i;
		}
	}
	printf("%s %s\n",st[max1].name,st[max1].id);
	printf("%s %s\n",st[min1].name,st[min1].id);
}
