#include<stdio.h>

int main(){
	int a,b,c,n,m=0,j,i=0;
	char s[100],*t[]={"YSE","NO"};
	scanf("%d",&n);
	getchar();
	for(j=0;j<n;j++){
		a=b=c=m=0;
		while((s[i]=getchar())!='\n'){
			if(s[i]=='P')
			m=1;
			if(s[i]=='T')
			m=2;
			if(m==0&&s[i]=='A')
				a++;
			if(m==1&&s[i]=='A')
				b++;
			if(m==2&&s[i]=='A')
				c++;
			if(s[i]!='A'&&s[i]!='P'&&s[i]!='T'){
				b=0;
				continue;
			}
			i++;
		}
		if(a*b==c&&(b==1||b==2&&b!=0))
		s[j]=0;
		else
		s[j]=1;
	}
	for(j=0;j<n;j++){
		printf("%s\n",t[s[j]]);
	}
	return 0;
}
