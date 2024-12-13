//#include <???.h> //Author by Quan dep trai
int nhap(int a[50], int n)
{
	int i,tong;
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
}

int ktra(int a[50],int n)
{
	int i,tong;
	a[50];
	for(i=0;i<n/2;i++){
		a[i]; 
			if(a[i]==a[n-1-i])
	          tong=1;
	} 
	return tong;
}

int main()
{
  int n;
  int a[50];
  scanf("%d",&n);
  nhap(a,n);
  ktra(a,n);///
  if(ktra(a,n)==1)
    printf("1");
  else printf("0");  
	return 0;
}


