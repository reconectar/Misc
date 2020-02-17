#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ticketp[100];
    int fila[100];
    int ticketn[100];
    int contn = 0;
    int contp = 0;
    int i;

    while(i!=1337){
        printf("Escolha o tipo de ticket a ser retirado:\n");
        printf("1. Normal\n");
        printf("2. Prioritaria\n");
        printf("3. Ver a fila\n");
        scanf("%d",&i);
        system("cls");
        switch(i) {
            case 1 :
                ticketn[contn] = contn + 1;
                printf("Ticket %dn retirado\n",ticketn[contn]);
                contn++;
                system("PAUSE");
                break;

            case 2 :
                ticketp[contp] = contp + 1;
                printf("Ticket %dp retirado\n",ticketp[contp]);
                contp++;
                system("PAUSE");
                break;

             case 3 :
                 for (i = 0; i < contp; i++) {
                        fila[i] = ticketp[i];
                 }

                 for(i=contp; i<(contp+contn); i++){
                    fila[i]=ticketn[i-contp];
                 }
                 printf("Proximo no guiche: ");
                 for (i = 0; i < contp+contn; i++){
                     if(i<contp){
                        printf("%dp\n", fila[i]);
                    }else{
                        printf("%dn\n", fila[i]);
                    }
                 }
                 system("PAUSE");
                 break;

             default :
                printf("Insira uma opcao valida\n");
                system("PAUSE");
                break;
        }
        system("cls");
    }

    //for(i=0; i<cont; i++){
    //        printf("%d\n", fila[i]);

    //}
    return 0;
}
