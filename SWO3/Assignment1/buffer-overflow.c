#include <stdio.h>
#include <string.h>

// NOTE: needs to be compiled with GCC option -fno-stack-protector to be exploitable

int main(int argc, char *argv[]) {
  char access_token = 0;
  char name[11];
  char password[11];

  if (argc != 2) {
    printf("usage: buffer-overflow <username>\n");
    printf("e.g. \"buffer-overflow admin\"\n");
    printf("      then enter your password when prompted\n");
    return -1;
  }

  strncpy(name, argv[1], 5);
  printf("password (max 10 chars): ");
  scanf("%7s", password);

  if (strncmp(name, "admin", 5) == 0 &&
      strncmp(password, "letmein", 7) == 0) {
        access_token = 97;
  }

  printf("username = \"%s\", password = \"%s\", access token = %d (0x%x, '%c')\n", name, password, access_token, access_token, access_token);
  if (access_token == 97) {
    printf("FULL ACCESS GRANTED\nSource Code Password is \"BuFfeR0veRFlOw\"\n");
  } else {
    printf("You need access token = %d (= 0x%x [hex], '%c' [ascii]) to access the ZIP-File password\n", 97, 97, 97);
  }

  return 0;
}
