#include <stdio.h>

void ucitaj(char niz[]){  //function that loads the lines

    int i=0;
    char c;

    while((c=getchar())!=EOF){
        niz[i]=c;
        i++;      

    }
   

}

int copy(char niz[],char niz2[]){   //function that finds out the length of each line and store the longest line and its length

    int duzina=0,maxduzina=0,i=0,n=0,index1;



        while(niz[i] != EOF){


        n++;

        if(niz[i] == '\n'){  //when we come to the end of line store length and reset counter
            duzina = n;
            n=0;
        }

        if(duzina > maxduzina){   //check if length is the longest if it is store it
            maxduzina=duzina;
            index1=i-duzina;  // store the starting index in array of the said line
        }
        
        i++;
    }

    for(int k=0;k<maxduzina;k++){ //copy the longest line into buffer array
        niz2[k]=niz[k+index1];
    }

    return maxduzina;

}

int main(){

    char niz[1000],niz2[1000];
    int maxduzina=0;

    ucitaj(niz);
    maxduzina=copy(niz,niz2);

    printf("Duzina niza je: %d\n",maxduzina);
    printf("niz je: ");
     for(int i=0;i<maxduzina;i++){
        printf("%c",niz2[i]);
    }

    return 0;
}
