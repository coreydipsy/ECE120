#include <stdio.h>
//g(w,x,y,z) = x' + wxy'z + yz'
int main()
{
    unsigned int w = 0;
    unsigned int x = 0;
    unsigned int y = 0; 
    unsigned int z = 0;
    unsigned int s, t;
    unsigned int g;
     
    /* Print header for K-map. */
    printf("             yz      \n");
    printf("        00  01  11  10 \n");
    printf("        ______________\n");
     
    /* row-printing loop */
    for (w = 0; 2 > w; w = w + 1) {
     
  
        for (s = 0; 2 > s; s = s + 1) {
        x = w^s;  
        printf("wx  %u%u | ", w, x);
        
            for(y = 0; 2 > y; y = y + 1){
                
                for(t = 0; 2 > t; t = t + 1){
                    
                    z = y^t;
                    
                    g = (~x&1)||(w&x&(~y&1)&z)||(y&(~z&1));
                    
                    printf("%u   ", g);
                
                }
            }printf("\n");
        }
    }
     
    return 0;
}



