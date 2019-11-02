#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int init();
int rep();

int main(){
	srand(time(0));
	printf("token_count=%d",rep(init()));
	return 0;
}

int init(){
	int token;
	puts("initiationn success!");
	puts("scan_token:");
	scanf("%d",&token);
	return token;
}

int rep(int c){

	int r1;
	r1=rand()%c+(c%10);
	printf("rep cycle= %d\n",r1);
	if(r1>=(c/2))
		puts("danger!!!");
	if(r1>=(c/2-r1))
		r1=rep(r1);
	if(r1<=c/12)
		r1=init();
	for(;r1>0;r1--)
		c++;
	return c;
		
	
}
