//#include <???.h> //Author by Quan dep trai
#include<math.h>
int main()
{    float a,b,c,del;
      
     scanf("%f %f %f",&a,&b,&c);
     if (a==0)
     printf("NO");
     else
     del=b*b-4*a*c ;
           {if(del<0)
           printf("NO");
           else {if (del ==0)
             printf ("%0.2f",-b/(2*a));
             else 
	{printf("%0.2f ",(-b+sqrt(del))/(2*a)),printf("%0.2f",(-b-sqrt(del))/(2*a));}}
}
return 0;}
