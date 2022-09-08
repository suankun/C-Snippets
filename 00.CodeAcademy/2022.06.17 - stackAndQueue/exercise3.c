#include <stdio.h>
#include <string.h>

#define MAX 5

union data
{
  int p;
  char str[MAX];
};
enum e_data
{
  int_number,
  string
};
void printInfo(union data **ptr, enum e_data en);
int main()
{
  union data test;
  test.p = 1;
  strcpy(test.str, "ok");
  union data *ptr = &test;

  printInfo(&ptr, string);
  printf("\n");

  return 0;
}
void printInfo(union data **ptr, enum e_data en)
{
  if (en == int_number)
  {
    printf("%d", (*ptr)->p);
  }
  else if (en == string)
  {
    printf("%s", (*ptr)->str);
  }
}
