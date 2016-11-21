# C-Code
Collect My C Code
#include<stdio.h>
#include<string.h>
main ()
{
	char input[50];
	int i,len,n,k;
	scanf("%s",input);
	len=strlen(input);
	for(i=2;i<=len;i++)
	{
		if(len%i==0)
		{
			n=len/i;
			for(j=0;j<=n;j++)
			{
				if(input[j]==input[j+n])
				{
					for(k=0;k<n;k++)
					{
						printf("%c",input[k]);
					}
				}	
			}
		}
		else
		{
			
		}
	}	
}
