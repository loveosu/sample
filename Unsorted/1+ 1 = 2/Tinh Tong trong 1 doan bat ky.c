#include <stdio.h>

int main(){ long long S = 0;
    int a,b;
    scanf("%d %d",&a,&b);
    
    
    for(int i = a; i <= b; i++)
    {
    	S += i; 
    }
    printf("%lld",S);
return 0;
}
	
//Viet chuong trình C cho phép nhap vào hai so a, b. Thuc hi?n tính t?ng các s? t? nhiên n?m trong kho?ng a, b và in ra màn hình. (Luu ý ngu?i dùng có th? nh?p a l?n hon b)
