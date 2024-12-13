#include <stdio.h>
int main()
{    int a,b,c;
      scanf("%d %d %d",&a,&b,&c);
      
if(a==b && b==c && a==c)
   printf("%d",3);

else if (a^2 +b^2==c^2 )
            printf("%d",1);
     
     else if (a==b &&a!=c && b==c &&c!=a && a==c&&a!=b)
         printf("%d",2);
            
            else printf("%d",0);    
return 0;}


