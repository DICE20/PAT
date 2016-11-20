#include <stdio.h>
int main(){
    char a[1000];
    int b=0,n=0,m=0;
    scanf("%s %d",a,&b);
    //char c[sizeof(a)/sizeof(a[0])];
    for (int i = 0; i < 1000; i++)
    {
    	/* code */
    	if (a[i]!='\0')
    	{
    		n=m*10+(a[i]-'0');
    	

    		//m=n-((a[i]-'0')/b);
    		m=n%b;
    		/* code */
    		if (i==0&&(n/b)==0)
    		{
    			continue;
    			/* code */
    		}
    		
    		printf("%d",n/b);

    			/* code */
    		

    	}
    	else
    		break;
    	
    }
    printf(" %d",m);
}
