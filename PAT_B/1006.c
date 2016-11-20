#include <stdio.h>
#include <math.h>
int main(){
	char a[11],da,b[11],db;
	int z=0,x=0;
	scanf("%s %c %s %c",a,&da,b,&db);
	for (int i = 0; i < 11; ++i)
	{
		if (a[i] == da)
		{
			z++;
		}
		if (b[i] == db)
		{
			x++;
		}
	}
	int s = 0;
	for (int i = 0; i < z; ++i)
	{
		s += pow(10, i)*(da-'0');
	}
	for (int i = 0; i < x; ++i)
	{
		s += pow(10, i)*(db-'0');
	}
	printf("%d", s);
}