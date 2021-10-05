/* [1.] Convert Celsius to Fahrenheit */


#include<stdio.h>

void main()

{

    float c,f;

    printf("Enter the temperature in Celcius: ");

    scanf("%f",&c);

    f = c * 9/5 + 32;

    printf("Temperature in Farenheit: %f",f);

}



/* [2.] Convert Farenheit to Celcius */


#include<stdio.h>

void main()

{

    float c,f;

    printf("Farenheit : ");

    scanf("%f",&f);

    c = (f - 32) * 5/9;

    printf("Celcius: %f",c); 



}



/* [3.] Convert Meter to Feet*/


#include<stdio.h>

void main()

{

    float m,f;

    printf("Meter : ");

    scanf("%f",&m);

    f = 3.2808399 * m;

    printf("Feet: %f",f);

}



/* [4.] Convert Feet to Meter */


#include<stdio.h>

void main()

{

    float m,f;

    printf("Feet : ");

    scanf("%f",&f);

    m = f / 3.2808399;

    printf("Meter: %f",m);

}



/* [5.] Convert Km to M/cm/mm*/


#include<stdio.h>

void main()

{

  float km;

  char v;

  float ans;



  printf("K.M. : ");

  scanf("%f",&km);

  printf("KM will be changed in (M=Meter, c=Centimeter,m=milimeter) : ");

  fflush(stdin);

  scanf("%c",&v);

  if(v=='M')

     ans=km*1000;

  if(v=='c')

     ans=km*100000;

  if(v=='m')

     ans=km*1000000;

  printf("Answer : %.2f",ans);  

}



/* [6.] C Program to convert AC to DC and vice versa*/

# include <stdio.h>

 int main()

 {

     int choice; 

     float ac=0.0,dc=0.0;

     printf("Menu \n 1.AC to DC \n 2.DC to AC \n Enter Choice:"); 

     scanf("%d",&choice); 

     

     switch(choice) 

        { 

        case 1: printf("Enter AC current: "); 

                  scanf("%f",&ac);

                  dc=ac*0.636;

                  printf("AC=%f, DC=%f",ac,dc);

                  break; 

        case 2: printf("Enter DC current: "); 

                  scanf("%f",&dc);

                  ac=dc/0.636;

                  printf("AC=%f, DC=%f",ac,dc);

                 break; 

         default:printf("Error!"); 

                   break; 

        } 

    return 0; 

 }
