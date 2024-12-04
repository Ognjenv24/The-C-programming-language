#include <stdio.h>
#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */

//Horisontal histogram
int main()
{
    int c, nc = 0, state = OUT;
    int duzina[20] = {0}; 

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') { // Signals end of a word
            if (state == IN) {
                state = OUT;
                if (nc > 0 && nc <= 20) {
                    duzina[nc - 1]++; // Increment frequency of the word length
                }
                nc = 0; // Reset character count for the next word
            }
        } else {
            // Inside a word
            state = IN;
            nc++;
        }
    }


    // Output results

for (int i = 0; i < 20; i++) {

        printf("Length %d: %d \n", i,duzina[i]);  // Print each element
}







    return 0;
}
