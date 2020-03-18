#include <stdio.h>
#include <stdlib.h>

int dia, mes;
int main()
{
    printf("Introduzca el mes en el que nacio la persona (1-12): ");
	scanf("%d", &mes);
	printf("El dia en el que nacio (0-31 dependiendo del mes): ");
    scanf("%d",&dia);
    switch(mes)
      {
        case 1:
            if (dia <= 19){
        printf("Capricornio");
        } else {
             if (dia <= 31){
            printf("Acuario");
        } else {
        printf("Denegado");}
        }
        break;
        case 2:
        if (dia <= 18){
        printf("Acuario");
        } else {
             if (dia <= 29){
            printf("Piscis");
        } else {
        printf("Denegado");}
        }
        break;
        case 3:
        if (dia <= 20){
        printf("Piscis");
        } else {
             if (dia <= 31){
            printf("Aries");
        } else {
        printf("Denegado");}
        }
        break;
        case 4:
        if (dia <= 19 ){
        printf("Aries");
        } else {
             if (dia <= 30){
            printf("Tauro");
        } else {
        printf("Denegado");}
        }
        break;
        case 5:
        if (dia <= 20){
        printf("Tauro");
        } else {
             if (dia <= 31){
            printf("Geminis");
        } else {
        printf("Denegado");}
        }
        break;
        case 6:
        if (dia <= 20){
        printf("Geminis");
        } else {
             if (dia <=30 ){
            printf("Cancer");
        } else {
        printf("Denegado");}
        }
        break;
        case 7:
       if (dia <= 22){
        printf("Cancer");
        } else {
             if (dia <= 31){
            printf("Leo");
        } else {
        printf("Denegado");}
        }
        break;
        case 8:
        if (dia <= 22){
        printf("Leo");
        } else {
             if (dia <= 31){
            printf("Virgo");
        } else {
        printf("Denegado");}
        }
        break;
        case 9:
        if (dia <= 22){
        printf("Virgo");
        } else {
             if (dia <= 30){
            printf("Libra");
        } else {
        printf("Denegado");}
        }
        break;
        case 10:
        if (dia <= 22){
        printf("Libra");
        } else {
             if (dia <=31 ){
            printf("Escorpio");
        } else {
        printf("Denegado");}
        }
        break;
        case 11:
       if (dia <= 21){
        printf("Escorpio");
        } else {
             if (dia <= 30){
            printf("Sagitario");
        } else {
        printf("Denegado");}
        }
        break;
        case 12:
       if (dia <= 21){
        printf("Sagitario");
        } else {
             if (dia <= 31){
            printf("Capricornio");
        } else {
        printf("Denegado");}
        }
        break;
    }



}
