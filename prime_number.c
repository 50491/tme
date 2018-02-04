#include<stdio.h>
#include<stdlib.h>

int main(){
    char mode;
  
    do{
        if(mode!='\n')printf("Saisir v pour verifier si un entier est premier ou n pour calculer les n entier premier: \n");
        scanf("%c",&mode);
    }while (mode!='v' && mode!='n') ;
    
    printf("saisir le nombre(un entier naturel)\n");
    
    int n,i=1,j,cpt=1;
    scanf("%d",&n);
    if (mode=='n') {
    int tab[n];
    for(i=0;i<n;i++){
        tab[i]=0;
    }
    tab[0]=2;
    int bol;
    for(i=3;cpt<n;i+=2){
        bol=1;
        for(j=0;j<cpt-1;j++){
            if(i % tab[j]==0){
                bol=0;
            }
        }
        if(bol==1){
            tab[cpt]=i;
            cpt++;
        }
        
    }
    for(i=0;i<cpt;i++){
      
        if(i%5==0)printf("\n");
          printf("%d ",tab[i]);
    }
        printf("\n");
    

    
    }
    else if(mode=='v'){
        int tab[(n/2)+1];
        for(i=0;i<=n/2;i++){
            tab[i]=0;
        }
        tab[0]=2;
        for(i=3;i<=n;i=i+2){
            int bol=1;
            for(j=0;j<cpt-1;j++){
                if(i % tab[j]==0){
                    bol=0;
                }
            }
            if(bol==1){
                tab[cpt]=i;
                cpt++;
            }
        }
        for(i=0;i<cpt-1;i++){
              if(i%5==0)printf("\n");
            printf("%d ",tab[i]);
        }
            printf("\n");
        if (n==tab[cpt-1]){
            printf("Il y a %d nombre premier avant %d \n",cpt-1,n);
            printf("%d est premier\n ",n);
        }
        else{
            printf("%d \n",tab[cpt-1]);
        printf("Il y a %d nombre premier avant %d \n",cpt,n);
        printf("%d n'est pas premier \n",n);
        }
        
        
    }
    
    
}
