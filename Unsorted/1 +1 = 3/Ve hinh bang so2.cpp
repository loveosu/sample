//#include <???.h> //Author by Quan dep trai
int main()
{ int i,j,m,n,re;
  scanf("%d",&m);
    for (i=1;i<=m;i++){
    	for (j=1;j<=m;j++){
    		if(i>=j)
    		printf("%d ",m-j+1);
    		else printf("%d ",m-i+1);
	    }
    printf("\n");}
}

