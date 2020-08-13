#include<stdio.h>  
int main()
{    
    int n,i,mid=0,flag=0;    
    printf("Enter the number:");    
    scanf("%d",&n);   
    int num=(int)n;                         //typecasting done, to convert float and double to int
    if (num==0 || num==1)                   //as 0 and 1 are not considered as prime numbers
        {
            printf("%d is not considered as prime number, so it is Invalid Number\nPlease enter another positive number", num);
            flag=1;
        }
    else if(num<0)                          //if negative number entered 
        {
            printf("Invalid Number\nPlease enter positive number");
            flag=1;
        }
    else
        {
            mid=num/2;                      //to iterate for loop upto num's middle element        
            for(i=2;i<=mid;i++)    
                {    
                    if(num%i==0)            //check remainder when divided by each for loop's i value
                        {    
                            printf("Entered number is not prime" );    
                            flag=1;    
                            break;    
                        }    
                }                   
            
        }   
    if(flag==0)    
        printf("Entered number is prime");
    return 0;  
 }