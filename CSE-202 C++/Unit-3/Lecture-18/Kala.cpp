#include <stdio.h>
#include <stdlib.h>

// This function writes the user input to a file named "test.txt"
int setup() {
  // Declare variables to store the user input
  int i;
  float f;
  char s[80];

  // Prompt the user to enter an integer, a float, and a string
//   printf("Enter an integer, a float, and a string (separated by spaces): ");
  
  // Read the user input and check if it is valid
  if (scanf("%d %f %s", &i, &f, s) != 3) {
    // Invalid input, return non-zero
    return -1;
  }

  // Open the file for writing
  FILE *fp = fopen("test.txt", "w");
  

  if (fp == NULL) {
   printf("Cannot open file.\n");
    return -2;
  }

  // Write the user input to the file
  fprintf(fp, "%d %f\n%s\n", i, f, s);

  // Close the file
  fclose(fp);

  // Return zero to indicate success
  return 0;
}

// This is the main function that calls the setup function and reads the file
int main() {
  // Call the setup function and check its return value
  if (setup() != 0) {
    // Setup failed, print an error message and exit
    printf("Unable to setup.\n");
    exit(1);
  }

  // Open the file for reading
  FILE *fp = fopen("test.txt", "r");

  if (fp == NULL) {
   printf("Cannot open file.\n");
    exit(2);
  }

  // Declare variables to store the data from the file
  int i;
  float f;
  char s[80];

  // Read the data from the file and check if it is valid
// Read the data from the file and check if it is valid
if (fscanf(fp, "%d %f\n%s\n", &i, &f, s) != 3) {
  // Invalid data, print an error message and exit
  printf("Invalid data in file.\n");
  exit(3);
}

// Print the data from the file
if (f == 0) {
  printf("%d %d\n%s\n", i, 0, s);
} else {
  printf("%d %.2f\n%s\n", i, f, s);
}


  // Close the file
  fclose(fp);

  // Return zero to indicate success
  return 0;
}
