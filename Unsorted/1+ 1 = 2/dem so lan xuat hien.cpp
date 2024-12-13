int count(int n, int i)
{
	int dem = 0;
	while(n > 0)
	{
		if(i == (n % 10))
			dem++;
		n /= 10;
	}
	return dem;
}
void output(int n)
{
	for(int i = 0; i <= 9; i++) //chi co 10 chu so 0 1 2 3 4 5 6 7 8 9
	{	if(count(n , i) != 0)
		{printf("%d %d\n", i, count(n, i));}	}
}

int main()
{0
	int n = 0;
	scanf("%d", &n);
	output(n);
	return 0;
}
