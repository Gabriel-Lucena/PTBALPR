#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias);

int main()
{
  int dias, meses, anos;

  scanf("%d", &anos);

  scanf("%d", &meses);

  scanf("%d", &dias);

  printf("%d", idadeEmDias(anos, meses, dias));

  return 0;
}

int idadeEmDias(int anos, int meses, int dias)
{

  if ((meses > 12) || (dias > 30))
  {
    return -1;
  }

  return (dias + meses * 30 + anos * 365);
}