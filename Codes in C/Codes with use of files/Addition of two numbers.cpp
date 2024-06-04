#include<stdio.h>
int main()
{
    FILE *calc;
    int number[2], result;
    printf("This program asks you for two numbers to be added and saves them in a file.\nThis program will close when both numbers are 0\n");
    calc= fopen("sums.txt","a+");
    while(1)
    {
        printf("Enter the number 1 to be added -->");
        scanf("%i",&number[0]);
        printf("Enter the number 2 to be added -->");
        scanf("%i",&number[1]);
        if(number[0]==0&&number[1]==0)
        {
            printf("The program will close...");
            break;
        }
        else
        {
            if (calc != NULL)
            {

                result=number[0]+number[1];
                printf("The sum %i + %i = %i \n",number[0],number[1],result);
                fprintf(calc,"The sum %i + %i = %i \n",number[0],number[1],result);
            }
            else
            {
                printf("File could not be opened.\n");
                fclose(calc);
                break;
            }
        }
    }
    fclose(calc);
}