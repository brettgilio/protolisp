#include <stdio.h>

// Declare a buffer for user input of size 2048
static char input[2048];

int
main(int argc, char** argv) {
  
  // 
  puts("Protolisp Version 0.0.1");
  puts("Press Ctrl+c to Exit\n");

  // While-loop
  while(1) {

    // Write prompt
    fputs("plisp >> ", stdout);

    // Read a line of user input of maximum size 2048
    fgets(input, 2048, stdin);

    // Echo input back to user
    printf("This is %s", input);
  }

  return 0;
}
