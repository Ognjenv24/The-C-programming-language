#include <stdio.h>
   /* count lines,tas,spaces in input */


  int main()
   {
   
       int c,nl=0,nt=0,ns=0;

       while((c = getchar()) != EOF){

            if(c==' '){
                ns++;
                }

            if(c=='\t'){
                    nt++;
                }

            if (c == '\n'){
                ++nl;
                 }        

       printf("%d %d %d\n", ns,nt,nl);
   }

             return 0;

       }