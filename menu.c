#include<stdio.h>

void menu ()
{
  int opcao;

  printf("******MENU PRINCIPAL*****\n1. Inscrever.\n2. Anular.\n3. Listagens.\n4. Calculo de Propinas.\n5. Gravar.\n0. Sair.\n\nDigite a sua opcao: ");

  scanf ("%d", &opcao);

  switch (opcao)
    {
      //no codigo de cada das funcoes nao esquecer de retornar ao menu principal
    case 1:
      printf ("increver()"); //fiz printf para testar as opcoes
      break;
    case 2:
      printf ("anular()");
      break;
    case 3:
      printf ("listagem()");
      break;
    case 4:
      printf ("calculo()");
      break;
    case 5:
      printf ("gravar()");
      break;
    case 0:
      break;
    default:
      printf ("Opcao Invalida\n\n");
      menu ();
    }
}


int main ()
{

  menu ();


  return 0;
}
