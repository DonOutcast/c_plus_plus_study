#include<stdio.h>
#include<string.h>


int main()
{
  FILE *fp;

  char line[20];
  char line2[20];

  fp = fopen("text.txt", "w");
  if(fp == NULL) {
  printf("no have file\n");
  }
  else {
    fputs("logica\n", fp);
    fputs("razum", fp);
    fclose(fp);
  }
  fp = fopen("text.txt", "r");
  if(fp == NULL)  {
  printf("no have file\n");
  }
  else {
    if(fscanf(fp, "%s", line) == 1)
    printf("podskazka login %s\n", line);

    if(fscanf(fp, "%s", line2)== 1)
    printf("podskazka parol %s \n", line2);
  }

  char a[20];
  char b[20];

  do {
    printf("vvedite login and parol, and proverte v file esli pravilny otvet\n");
    scanf("%s", &a);
    scanf("%s", &b);

  } while((strcmp(line, a) != 0) || (strcmp(line2, b) != 0));
  printf("pravilny otvet");


  return 0;
}