//janis lizeth salgado pérez//
// practica 6 , ejercicio 1//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,res,op;
    a=0;
    b=0;
    res=0;
    printf("Escoge opción \n 1-Suma\n 2-Resta\n 3-Multiplicación\n 4-División\n");
    scanf("%i",&op);
    printf("Ingrese dos numeros separados por coma");
    scanf("%i,%i",&a,&b);
      if(op==1)
      {
          res=a+b;
      }
      else
      {
          if(op==2)
          {
              res=a-b;
          }
          else
          {
              if(op==3)
              {
                  res=a*b;
              }
              else
              {
                  if(op==4)
                  {
                      res=a/b;
                  }
              }
              }
          }
    while(op==0)
    {
        printf("ingreso el número 0");
    }
    printf("%d", res);
    printf("\n Menú: Escoge opción \n 1-Suma\n 2-Resta\n 3-Multiplicación\n 4-División\n");
    scanf("%d",&op);
    return 0;
}



//Intento2//

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,res,op;
    a=0;
    b=0;
    res=0;
    printf("Escoge opción \n 1-Suma\n 2-Resta\n 3-Multiplicación\n 4-División\n");
    scanf("%i",&op);
    printf("Ingrese dos numeros separados por coma");
    scanf("%i,%i",&a,&b);
      if(op==1)
      {
          res=a+b;
      }
      else
      {
          if(op==2)
          {
              res=a-b;
          }
          else
          {
              if(op==3)
              {
                  res=a*b;
              }
              else
              {
                  if(op==4)
                  {
                      res=a/b;
                  }
              }
              }
      }
    while(op==0)
    {
        printf("ingreso el número 0");
    }
        printf("%i", res);
    
    printf("\n Escoge opción \n 1-Suma\n 2-Resta\n 3-Multiplicación\n 4-División\n");
    scanf(" %d",&op);
    
    return 0;
}
