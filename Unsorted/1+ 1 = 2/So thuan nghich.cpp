//#include <???.h> //Author by Quan dep trai
int main()
{  int a,n,b;
 scanf("%d",&n);
 a=n%10;
 
 for(n;n>0;n=n/10)
 b=n;
 
if(a==b)
printf("%d",1);
else printf("%d",0);
return 0;}
