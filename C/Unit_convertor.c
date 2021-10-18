#include <stdio.h>
int main()

{char x,y;
float z,v;
printf("\n");
printf("                                 UNIT CONVERTOR\n");
printf("                             What you want to convert\n");
printf("\n");
printf("                             select your convertion\n");
printf("\n");
printf(" *********************************************************************************\n");
printf("\n");
printf("    you want cm to km type a\t\tyou want cm to m type b\n    you want m  to cm type c\t\tyou want m to km type d\n    you want km to cm type e\t\tyou want km to m type f\n");
printf("\n");
printf(" ********************************************************************************\n");
printf("    Enter the conversion\n");
printf("\n");
printf("        Give your format:");
scanf("%c",&x);
if((x=='a')||(x=='b')||(x=='c')||(x=='d')||(x=='e')||(x=='f'))
{
printf("        Enter your value: ");
scanf("%f",&z);
printf("\n");
printf(" ********************************************************************************\n");
printf("\n");

if (x=='a')
{v=z*0.00001;
   printf(" conversion of %f cm to km format is %f km\n",z,v);}
else if (x=='b')
{v=z*0.01;
   printf(" conversion of %f cm to m format is %f m\n",z,v);}
else if (x=='c')
{v=z*100;
   printf(" conversion of %f m to cm format is %f cm\n",z,v);}
else if (x=='d')
{v=z*0.001;
   printf(" conversion of %f m to km format is %f km\n",z,v);}
else if (x=='e')
{v=z*10000;
   printf(" conversion of %f km to cm format is %f cm\n",z,v);}
else
{
   v=z*1000;
   printf("conversion of %f km to m format is %f m\n",z,v);
}
printf("\n");
printf(" ********************************************************************************\n");
printf("\n");
printf("                           ------Thank You for using!-------");
}
else printf(" WARNING-You have to enter the relevant format letter");
}
