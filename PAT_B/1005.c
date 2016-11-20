#include <stdio.h>

struct student
{
	int id;
	int d;
	int c;
};

typedef struct student Student;

int main(){
	int N,L,H;
	int id,d,c;
	scanf("%d %d %d",&N,&L,&H);
	printf("%d %d %d\n",N,L,H);
	Student allstu[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d",&id,&d,&c);
		allstu[i].id = id;
		allstu[i].d	= d;
		allstu[i].c = c;
		if (d>=H&&c>=H)
		{
			
		}

	}
	for (int i = 0; i < count; ++i)
	{
		/* code */
	}
}