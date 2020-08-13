#include <stdio.h>
int main()
{
    int add(int a, int b)                                 //function for addition
{
    return a+b;                                           //returns sum of two integer values
}
int subtract(int a, int b)                                //function for subtraction
{
    return a-b;                                           //returns subtraction of two integer values
}
    int (*aptr) (int,int)=&add;        //aptr is a function pointer to function add which accepts two int arguments and returns int value
    int (*sptr) (int,int)=&subtract;   //sptr is a function pointer to function subtract which accepts two int arguments and returns int value
    int res1=aptr(10,20);              //calling add function using function pointer aptr and provides two int arguments 
    int res2=sptr(20,10);              //calling subtract function using function pointer sptr and provides two int arguments
    printf("Addition of 10 and 20 is %d and\n",res1);     //displays addition 
    printf("Subtraction of 20 from 10 is %d",res2);       //displays subtraction
    return 0;
}

