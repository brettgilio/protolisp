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
    char* input = readline("plisp >> ");

    // Add input to history
    add_history(input);

    // Echo input back to user
    printf("This is %s\n", input);

    // Free retrieved input memory
    free(input);
  }

  return 0;
}
