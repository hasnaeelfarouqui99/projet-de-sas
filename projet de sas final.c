#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int montant[10];
char nom[10][10],prenom[10][10],cin[10][10];
int choix, chiffre;
int a,c,j, i,n,x,r=0;
char newcin[10];


void triAsc(char nom[10][10],char prenom[10][10],char cin[10][10],int montant[],int chiffre){
	
	
		for(i=0;i<n-1;i++){ //4=5-1
    for(j=i+1;j<n;j++){
        if ( montant[i] > montant[j] ) {
            c = montant[i];
           montant[i] = montant[j];
           montant[j] = c;
           
                        
        }
      }
    } 
}
void triDesc(char nom[10][10],char prenom[10][10],char cin[10][10],int montant[],int chiffre){
	for(i=0;i<n-1;i++){
	//4=5-1
        for(j=i+1;j<n;j++){
         if ( montant[i] < montant[j] ) {
            c = montant[i];
           montant[i] = montant[j];
           montant[j] = c;
           
        }
        }
	}
	}

	int recherch(char cin[10][10], char newcin[10]){
		for(i=0;i<n;i++){
			if(strcmp(newcin,cin[i]) == 0 ){ //memememe 0 far9 binathom
				return i;
			}
	}
	return -1;
}


int main()
{
    Menu:
    printf("==menu principel==\n");
    printf("1-introduction d'un compte bancaire\n");
    printf("2-introduction du plusieurs comptes bancaire\n");
    printf("3-operation\n");
    printf("4-affichage\n");
    printf("5-Fidelisation\n");
     printf("6-quitter l'application\n");
    scanf("%d",&choix);
     if(choix==1)
     {
         n++;
         for(i=0;i<n;i++){
         printf("1-nom\n");
         scanf("%s",nom[i]);
         printf("2-prenom\n");
         scanf("%s",prenom[i]);
         printf("3-cin\n");
         scanf("%s",cin[i]);
         printf("4-montant\n");
         scanf("%d",&montant[i]);
         
        }
     }


     if (choix==2){
     	printf("introduire plusieur compte\n");
       printf("entrer le nombre de comptes:\n");
       scanf("%d",&n);
        
                 
               for(i=0;i<n;i++){
                   printf("1-nom\n");
                 scanf("%s",nom[i]);
                 printf("2-prenom\n");
                 scanf("%s",prenom[i]);
                 printf("3-cin\n");
                 scanf("%s",cin[i]);
                 printf("4-montant\n");
                 scanf("%d",&montant[i]);
                 }
       
        goto Menu;
     }
     
     int montantdepot,montantretrait;
     if(choix==3){
         printf("entrer le montant de depot\n");
         scanf("%d",&montantdepot);
         montant[i]=montant[i]+montantdepot;
           printf("votre nouveau solde  %d \n",montant[i]);
          printf("entrer le montant de retrait\n");
         scanf("%d",&montantretrait);
        montant[i]=montant[i]-montantretrait;
           printf("votre nouveau solde %d \n",montant[i]);
         
     }
    
      else if(choix==4){
      	
      	for(i=0;i<n;i++){
      		
      		printf("%s\n", nom[i]);
      		printf("%s\n", prenom[i]);
      		printf("%s\n", cin[i]);
      		printf("%d\n", montant[i]);
      	}
		  }
           printf("1 - pour Affichage  des comptes par ordre Ascendant\t 2 - pour Affichage  des comptes par ordre descendant\t  \n");
           scanf("%d",&a);
           
           
             triAsc(nom,prenom,cin,montant,0);
             
                   	for(i=0;i<n;i++){
      		
      		printf("%s\n", nom[i]);
      		printf("%s\n", prenom[i]);
      		printf("%s\n", cin[i]);
      		printf("%d\n", montant[i]);
      		
		  }
		  	for(i=0;i<n;i++){
      		
      		printf("%s\n", nom[i]);
      		printf("%s\n", prenom[i]);
      		printf("%s\n", cin[i]);
      		printf("%d\n", montant[i]);
      		
		  }
           printf("3 - pour Affichage  des comptes par ordre Ascendantles comptes bancaire ayant un montant supérieur à un chiffre introduit\t 4 - pour Affichage  des comptes par ordre les comptes bancaire ayant un montant supérieur à un chiffre introduit\t  \n 5-recherch par cin\n");
           scanf("%d",&a);
            printf("entrer un chiffre\n");
	   scanf("%d",&chiffre);
           if(a==3)
	{
             triAsc(nom,prenom,cin,montant,0);
             
                   	for(i=0;i<n;i++){
      		
      		printf("%s\n", nom[i]);
      		printf("%s\n", prenom[i]);
      		printf("%s\n", cin[i]);
      		printf("%d\n", montant[i]);
      		
		  }
	}else
	{
	    triDesc(nom,prenom,cin,montant,0);
	              	for(i=0;i<n;i++){
      		
      		printf("%s\n", nom[i]);
      		printf("%s\n", prenom[i]);
      		printf("%s\n", cin[i]);
      		printf("%d\n", montant[i]);
      		
		  }
	}
	if(a==5){
		printf("enter ur cin\n");
		scanf("%s",newcin);
		x=recherch(cin,newcin); // soi-1,soii
		if(x==-1){
			printf("le cin ne trouve pas");
		}
   else if(x!=-1){
   	printf("le cin trouve %s \n",cin[i]);
   }
}
			goto Menu;
		 if(choix==5){
    printf("fidilisation\n");
      printf("la fidelisation est affectue \n");
       triDesc( nom,prenom, cin,montant,chiffre);
       	if(n<3){
       		i=n-1;
       		for(i=0; i<n; i++)
            {
            	 if (montant[i]==montant[i+1]){} //{}vide pas d'operation
            	  else if(montant[i]>montant[i+1])
                   r++;
                     if (r==3)
                     break;
                     for(j=0; j<=i; j++){
                printf("%s %s %s  :%d * %d \n",nom[j],prenom[j],cin[j],montant[j],montant[j]*1.3/100);
                }
		   }
		
		}
		 goto Menu;
  if(choix==6)
    printf("quitter l'application\n");
    return 0;
}
}
