//#include <???.h> //Author by Quan dep trai
int main()
{ 
  int gt,m,n,i,j;
		scanf("%d",&n);
		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
			  if(i==j)
				  printf("%d ",i-j+1); 
				    else if (i<j)
				      printf("%d ",j-i+1); 
				          else printf("%d ",i-j+1);				
			}
			printf("\n");5
		}
	return 0;
}
