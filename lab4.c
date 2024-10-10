#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char str[]){
    int n = strlen(str);  // Get the length of the string
    int start = 0;        // Initialize start index 
    int end = n - 1;      // Initialize end index
    
    // Swap characters from start and end until middle
    while(start < end){   // Loop until start meets end
        char temp = str[start];  // Temporarily store start character 
        str[start] = str[end];   // Move the end character to the start
        str[end] = temp;         // Move the temp (start character) to the end
        start++;  // Move start index forward
        end--;    // Move end index backward
    }
}

int main() {
    int number = 0;  // Initialize the variable to avoid undefined behavior
    
    // Prompt for number between 100 and 10000
    while(number < 100 || number > 10000){
       printf("Please enter a number between 100 and 10000: ");
       scanf("%d", &number);
    }
   
   // Convert the integer into a string
   char str[20];
   sprintf(str, "%d", number);
   printf("Your original number was: %s\n", str);
   
   // Reverse the string (to reverse the number)
   reverseString(str);
   printf("Your number reversed is: %s\n", str);

    return 0;
}
