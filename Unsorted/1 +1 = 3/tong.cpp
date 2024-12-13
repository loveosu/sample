//#include <???.h> //Author by Quan dep trai

int main(){ long long a,tg ;
scanf("%d", &a);
tg=1;

while(a)
{tg*= a%10;
a/=10;	}	

printf("%lld",tg);

return 0;
}
//Vi?t chuong trình C cho phép nh?p vào m?t s? n, th?c hi?n tìm t?ng các ch? s? c?a n và in ra màn hình.
