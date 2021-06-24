
/**Write a program to swap the string by using swapping data**/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap2(char *str1, char *str2)
{
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
}

int main()
{
  char str1[10] = "naveen";
  char str2[10] = "bittu";
  printf("before swapping\n");
  printf("%s ,%s\n", str1, str2);
  swap2(str1, str2);
  printf("after swapping\n");
  printf("%s ,%s", str1, str2);
  getchar();
  return 0;
}
#if 0
before swapping
naveen ,bittu
after swapping
bittu ,naveen
#endif // 0
