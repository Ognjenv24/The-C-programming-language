#include <stdio.h>

void ucitaj(char niz[]){

    int i=0;
    char c;

    while((c=getchar())!=EOF){
        niz[i]=c;
        i++;      

    }
   

}

int copy(char niz[],char niz2[]){

    int duzina=0,maxduzina=0,i=0,n=0,index1;



        while(niz[i] != EOF){


        n++;

        if(niz[i] == '\n'){
            duzina = n;
            n=0;
        }

        if(duzina > maxduzina){
            maxduzina=duzina;
            index1=i-duzina;
        }
        
        i++;
    }

    for(int k=0;k<maxduzina;k++){
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
