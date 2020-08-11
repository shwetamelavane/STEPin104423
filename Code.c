#include <stdio.h>
void main()
{
    char str[50];                       //create string of 50 characters
    char SubString[5][10];              //will store upto 5 words of 10 characters
    int i,j=0,k=0;                      
    printf("Enter a string:\n");        
    scanf("%s",str);
    for(i=0;i<=(strlen(str));i++)       //iterate for loop using strlen
    {
        if(str[i]=='_'||str[i]=='\0')   //if underscore or NULL found, will assign NULL into SubString[k]
        {
            SubString[k][j]='\0';
            k++;                        //incrementiong for next word
            j=0;                        //for next word,index assigned to 0
        }
        else
        {
            SubString[k][j]=str[i];
            j++;
        }
    }
    printf("Original String is: %s",str);
    printf("\nSubstrings after splitted by underscore:");
    for(i=0;i<k;i++)
        printf("%s ",SubString[i]);
}