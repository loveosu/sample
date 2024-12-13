//#include <???.h> //Author by Quan dep trai
int main()
{
	int i,j,n,m,tong;
	scanf("%d%d",&n,&m);
	if(m>=n)
		tong=m;
			else tong=n;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){ 
			if(i<=j)
			  printf("%d",tong-i);
			else printf("%d",tong-j); 
		}
		printf("\n");
	}
	return 0;
}
