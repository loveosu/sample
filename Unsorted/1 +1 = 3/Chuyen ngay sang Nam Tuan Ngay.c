//#include <???.h> //Author by Quan dep trai
int main()
{  int n,x,a,b,c;
scanf ("%d",&n);
      
      x=n/365;
      printf("%d ",x);
      
      a=n%365;
      b=a/7;
      printf("%d ",b);
      
      c=n%365%7;
      printf("%d",c);
return 0;}
