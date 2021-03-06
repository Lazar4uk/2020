#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double drob(double A, double B, double C)
{
  if(B + C*C != 0)
  {
    double result = (A * B) / (B + C*C);
    return result;
  }
  else
    printf("Error\n");
}

int fact(int D)
{
  int result = 1;
  for(int i = 1; i <= D; i++)
    result *= i;
  return result;
}

int Sum(int B)
{
  int result = 0;
  for(int D = 0; D <= B; D++)
    result += fact(D);
  return result;
}

float protect_number (char *buff, int len)
{
  int prot = 0, point = 0, znak = 0;
  float number;
   while(prot != len || znak > 0 || point > 1)
  {
    prot = 1;
    point = 0;
    znak = 0;

    for(int i = 0; i < len; i++)
    {
      if(buff[i] >= '0' && buff[i] <= '9') prot++;
      else if(buff[i] == '.'){point++; prot++;}
      else if(buff[i] == '-'){znak++; prot++;}
    }
    //printf("%d %d\n", prot, len);
        if(prot != len || znak > 0)
    {
      printf("It isn't number! Try again\n");;
      fgets(buff, 128, stdin);
      znak = 0;
    }
  }
  number = atof(buff);
  return number;
}
