# include<stdio.h>
# include<math.h>
int main()
{
	int n,dem=0,tong=0;
	int dau,cuoi,temp;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
	   dau=temp%10;
       temp/=10;
       dem++;
    }
    int a,d,e,giua;
    cuoi=n%10;
    a=pow(10,(1));
    d=n/10;
    e=pow(10,(2));
    giua=d%e;
    if(cuoi!=0)
    tong=cuoi*a+giua*10+dau;
    else 
    tong=giua*10+dau;
    printf("%d",tong);
return 0;	
}
