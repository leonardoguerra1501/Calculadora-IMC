#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
setlocale(LC_ALL,"");

printf("###########################\n");



        //VARI�VEIS

        float peso,altura,imc,pesoideal;
        char sexo;


        //Lendo os inputs
        printf("Escreva o seu peso em KG:\n");
        scanf("%f",&peso);
        printf("Escreva a sua altura:\n");
        scanf("%f",&altura);
        printf("\nqual seu sexo? Escreva M para masculino e F para feminino\n");
        fflush(stdin);
        scanf("%c",&sexo);


       //CALCULO IMC
        imc=(peso/(altura*2));
        printf("\nO seu IMC � %.2f, e de acordo com a OMS: \n",imc);

        if (imc<18.5){
            printf("Voc� est� abaixo do peso \n");
        }else if(18,5 <=imc && imc <25){
            printf("Voc� est� com o peso normal \n");
        }else if(25<=imc && imc <=30){
            printf("Voc� est� com acima do peso \n");
        }else if(imc>30){
            printf("Voc� est� com obesidade \n");
        }

        //Peso ideal

        switch(sexo){
        case('m'):
        pesoideal = ((72.7*altura)-58);
        printf("\n\n O seu peso ideal � %.2f",pesoideal);
        break;
        case('f'):
        pesoideal = ((62.1*altura)-44.7);
        printf("\n\n O seu peso ideal � %.2f",pesoideal);
        }

        printf("\n\n\n#######################################################################");
        printf("#######################################################################");





system("pause");







}
