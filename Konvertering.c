/*Inkluder Library*/
#include <stdio.h>

/*Definer konstanter*/
#define SEC_PR_HOUR (3600)
#define SEC_PR_MINUTE (60)
#define MIN_PR_HOUR (60)

main()
{
  /*Initialisere Variabler*/
  int rest, sekunder, timer, minutter, total=-1;
  char *sek = "", *mint = "", *tim = "";

  /*Prompt for input*/
  printf("Tid i sekunder: ");
  scanf("%i",&total);

  /*Beregning af tid*/
  timer = total / SEC_PR_HOUR;
  rest = total % SEC_PR_HOUR;
  minutter = rest / SEC_PR_MINUTE % 60;
  rest = rest % MIN_PR_HOUR;
  sekunder = total % 60;

  /*Variabler afgrænses i forhold til input*/
  if (sekunder > 1) {
  	sek = "er";
  }
  if (minutter > 1) {
  	mint = "ter";
  }
  if (timer > 1) {
  	tim = "r";
  }

  /*Prompt for output*/
  if (total >= 0) {

    if (timer) {
      printf("Indtastet tid er:\n%i Time%s\n", timer, tim);
    }
    if (minutter) {
      printf("%i Minut%s\n", minutter, mint);
    }
    if (sekunder) {
      printf("%i Sekund%s\n", sekunder, sek);
    }
  }

  else
    {printf("Forkert Indtastning, afslutter program\n");}

  /*Returner Program*/
  return 0;
}
