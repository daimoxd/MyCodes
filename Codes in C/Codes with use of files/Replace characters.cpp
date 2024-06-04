#include <stdio.h>
int main()
{
	FILE *input; //'a' representa archivo
	FILE *output;
	char text[50],replace,character_s; //'c' representa caracter
	int cont=0;
	input=fopen("INPUT.TXT", "w");
	output=fopen("OUTPUT.TXT", "w");
	if(input!=NULL&&output!=NULL)
	{
		printf("Enter the text to use -->");
		gets(text);
		fprintf(input, "%s",text);
		fclose(input);
		printf("Enter the character to search for-->>");
		scanf("%c",&character_s);
		fflush(stdin);
		printf("Enter the character to replace if '%c' is found -->",character_s);
		scanf("%c",&replace);
		for(cont;text[cont]!='\0';cont++)
		{
		if(text[cont]==character_s)
			{
			text[cont]=replace;
			}
		}
		fprintf(output, "%s",text);
		fclose(output);	
		printf("Character replaced correctly :D");
	}
	else
		printf("Error opening the file :(");

}