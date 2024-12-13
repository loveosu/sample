//#include <???.h> //Author by Quan dep trai
int main()
{
	int i,j,m,n,tong;
  scanf("%d%d",&n,&m);
  tong=m;
  for(i=n-1;i>=0;i--){
  	for(j=m-1;j>=0;j--){
  		if (j>i)
  		  printf("%d",tong-i);
  		else if(i>j) printf("%d",tong-j);
			else printf("%d",tong-i+j);  
		}
		printf("\n");
	}
  return 0;
}
