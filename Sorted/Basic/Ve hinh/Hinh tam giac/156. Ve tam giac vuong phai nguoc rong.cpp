//#include <???.h> //Author by Quan dep trai

void in(int x[][20],int n,int m=0){
	m==0 ? m=n : m=m;

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			scanf("%d",&x[i][j]);
		}
	}
}

void out(int x[][20],int n,int m=0){
	m==0 ? m=n : m=m;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(i>=j+1)
				printf("~");
			else if(i==0 || j==n-1 || i==j)
				printf("*");	
			else printf(".");	
		}
		printf("\n");
	}
}

int main(){
	int x[20][20],n;
	scanf("%d",&n);
	out(x,n);
	
	return 0;
}
