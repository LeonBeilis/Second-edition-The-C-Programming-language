#include <stdio.h>

int main()
{
    int counter;
    char p;
    char c;
    for(counter=1; (c = getchar()) != EOF; counter++){
        if(c == 10){
            counter--;
            if(c != p) printf("===========================\n");
            p = c;
            continue;
        }
        printf("counter value: %d\n", counter);
        
        printf("character asci value: %d\n", c);
        p = c;
    }
    return 0;
}
