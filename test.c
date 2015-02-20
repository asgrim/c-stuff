#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void usage(char* cmd, char* param, char* extra)
{
  printf("Usage: %s %s %s\n", cmd, param, extra);
  return;
}

int main(int argc, char* argv[])
{
  if (argc < 2) {
    usage(argv[0], "[hello|add]", "");
    return 1;
  }

  if (strcmp(argv[1], "hello") == 0) {
    if (NULL == argv[2]) {
      usage(argv[0], argv[1], "[name]");
      return 1;
    }
    printf("Hello %s!\n", argv[2]);
  } else if (strcmp(argv[1], "add") == 0) {
    if (NULL == argv[2] || NULL == argv[3]) {
      usage(argv[0], argv[1], "[a] [b]");
      return 1;
    }
    char *lol;
    long a = strtol(argv[2], &lol, 10);
    long b = strtol(argv[3], &lol, 10);
    printf("The answer to %li + %li is %li.\n", a, b, (a+b));
  }
  return 0;
}
