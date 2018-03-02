#include <stdio.h>
#include<stdlib.h>
int estpalindrome(char ch[])
{
	int i=0 ;
	int taille =0;
	while (ch[i++] !='\0') ;
	taille =i-1 ;
	for (i=0;i<taille-i-1;i++) 
	{ if (ch[i] != ch[taille-i-1] ) 
			return 0 ;
	}
	return 1 ; 
} 
/* int estpalindromeversionpointeur(char *ch)
{
	char *i ,*j ;
	int taille ;
	while (*i++ !='\0') ;
	taille =i-ch-1;
	for (i=ch;j=ch+taille-1 ;i<j;i++;j--) 
	{ if (*i!=*j)
              return 0;  
		}
		return 1;
} */

int main (void) 
{ 
	char ch[50] ; 
	printf("donner ch ") ;
	scanf("%s",ch);
	if(estpalindrome(ch)==1)
	{puts("oui");}
		else
		{ 
		puts("non"); 
	 }
	 return 0 ;
	 
}
