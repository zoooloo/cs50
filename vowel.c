#include<stdio.h>
#include<string.h>
int main()
{
	fflush(stdin);
	fflush(stdout);
	int i,n;
	char sentence[50];
	char vowel[12][12]={"a","e","i","o","A","E","I","O","U"};
    printf("Enter a string\n\n");
    scanf("%s",&sentence[50]);
	for(i=0,n=strlen(sentence);i<n&&i!='\0';i++)
	{
		if(sentence==vowel[i])
		{
		 printf("\n%c",&sentence);
		}

	}


}

