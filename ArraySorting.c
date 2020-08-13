#include <stdio.h>
#include <stdlib.h>
void sort(int n, int* ptr)                                               // Function to sort the numbers which takes pointer to an array as argument
{
int i, j, t;
for (i = 0; i < n; i++)                                                 // Sort the numbers in ascending order
{
    for (j = i + 1; j < n; j++) 
    {
        if (*(ptr + j) < *(ptr + i))
        {
            t = *(ptr + i);
            *(ptr + i) = *(ptr + j);
            *(ptr + j) = t;
        }
    }
}
for (i = 0; i < n; i++)                                                 // print the sorted numbers
printf("%d ", *(ptr + i));
}

int main()
{
int n=5,i;
int *ptr;
ptr=(int*)malloc(n*sizeof(int));                                        //Dynamic allocation of Memory
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
        {
            printf("Dynamic allocation of Memory successful.\n");
            printf("Sorted elements of an array are: ");                // Print the elements of the array in ascending order
            int ptr[] = { 10, 3, 20, 9, 7 };                            //Initial unsorted Array
            sort(n,ptr);                                                //passing dynamically allocated and filled array to function
        }
return 0;
} 
