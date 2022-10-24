#include <stdio.h>
int main()
{
    /* Declare variables */
    int counter;   /* loop counter */
    int product;   /* result,  5^N */
    int endCount;  /* power N */
    /* Read value of N */
    printf("This program will compute 5^N; enter N: ");
    scanf("%d", &endCount);
    
    if(endCount<0){
        printf("The operation is undefined for negative integers");
        return 0;
    }else if(endCount>13){
        printf("The value exceeds the supported numerical range");
        return 0;
    }else{
        /* Compute 5^N */
    product = 1;
    for (counter = 1; counter <= endCount; counter = counter + 1)
    {
        product = 5*product;
    }
    /* Print the answer */
    printf("%d\n", product);
    return 0;
        
    }
    
}


