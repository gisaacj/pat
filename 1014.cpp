#include<stdio.h>
int main(){
	int i,j,k,l=0;
	char a[61],b[61],c[61],d[61],*p,*q;
	char week[][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	scanf("%s",&a);
	scanf("%s",&b);
	scanf("%s",&c);
	scanf("%s",&d);
	p=a;
	q=b;
	for(i=0;i<60;i++,p++,q++)
		if(*p==*q&&*p>='A'&&*p<='G'){
			if(l==0){
				j=*p-'A';
				l=1;
			}
			else if(*p==*q&&(*p>='0'&&*p<='9'))
				k=*p-'0';
			else if(*p==*q&&(*p>='A'&&*p<='N'))
				k=*p-'A'+10;
		}
	p=c;
	q=d;
	for(i=0;i<60;i++,p++,q++){
		if(*p==*q&&(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
			l=i;
	}
	if(k<10&&l<10)
		printf("%s 0%d:0%d",week[j],k,l);
	if(k<10)
		printf("%s 0%d:%d",week[j],k,l);
	if(l<10)
		printf("%s %d:0%d",week[j],k,l);
	else
		printf("%s %d:%d",week[j],k,l);
}
