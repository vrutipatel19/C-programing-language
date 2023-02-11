//ARTIHMENTIC op    + - * / % ++ --
#include<stdio.h>


int main()
{
	  int p,r,result;
	  printf("enter the two values:");
	  scanf("%d %d",&p,&r);
	  
	  result=p+r;
	  printf("sum of p+r=%d\n",result);
	  result=p-r;
	  printf("sub of p-r=%d\n",result);
	  result=p*r;
	  printf("mul of p*r=%d\n",result);
	  result=p/r;
	  printf("div of p/r=%d\n",result);
	  result=p%r;
	  printf("reminder of p%r=%d\n",result);
	  
	  result=p++; 
	  printf("increment=%d\n",result);
	  
	  result=++p; //p=12
	  printf("increment=%d\n",result);
	  
	  result=p--; //12   p=10
	  printf("increment=%d\n",result);
	  
	  result=--p;  //p=10
	  printf("increment=%d\n",result);
	  
}
