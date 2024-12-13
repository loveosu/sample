//#include <???.h> //Author by Quan dep trai
int main()
{
	int i,j,m,n,tong;
	scanf("%d%d",&n,&m);
	if(m>=n)
	tong=m;
	else tong=n;
	for(i=n-1;i>=0;i--){
		for(j=m-1;j>=0;j--){
			if(i<=j)
			  printf("%d",tong-i);
			else printf("%d",tong-j);
		}
		printf("\n");
	}
	return 0;
}
