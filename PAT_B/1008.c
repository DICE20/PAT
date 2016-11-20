#include <stdio.h>
int main(){
	int N = 0;
	int s=0,f=0,p=0;
	int ashi=0,ajian=0,abu=0;
	int bshi=0,bjian=0,bbu=0;
	char a,b;
	scanf("%d",&N);
	getchar();
	for (int i = 0; i < N; ++i)
	{
		/* code */


		scanf("%c %c",&a,&b);
		//printf("%c#%c",a,b);
		getchar();
		if (a==b)
		{
			/* code */
			p++;
		}
		if ((a=='C'&&b=='J')||(a=='B'&&b=='C')||(a=='J'&&b=='B'))
		{
			s++;

			if (a=='C')
			{
				ashi++;
				/* code */
			}
			if (a=='J')
			{
				ajian++;
				/* code */
			}
			if (a=='B')
			{
				abu++;
				/* code */
			}
			/* code */
		}
		if ((b=='C'&&a=='J')||(b=='B'&&a=='C')||(b=='J'&&a=='B'))
		{

			if (b=='C')
			{
				bshi++;
				/* code */
			}
			if (b=='J')
			{
				bjian++;
				/* code */
			}
			if (b=='B')
			{
				bbu++;
				/* code */
			}
			/* code */
		}


	}
	f = N - s -p;
	printf("%d %d %d\n",s,p,f );
	printf("%d %d %d\n",f,p,s );
	if (abu>=ashi)
	{
		if(abu>=ajian)
			printf("B ");
		else
			printf("J ");
		/* code */
	}
	else{
		if(ashi>=ajian)
			printf("C ");
		else
			printf("J ");

	}

	if (bbu>=bshi)
	{
		if(bbu>=bjian)
			printf("B");
		else
			printf("J");
		/* code */
	}
	else{
		if(bshi>=bjian)
			printf("C");
		else
			printf("J");

	}


}