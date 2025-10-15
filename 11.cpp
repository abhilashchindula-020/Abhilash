//Click on Submit in the IDE to proceed

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // Integer
    int a = -5;
    printf("%d\n", a);
   
    // Float
    float b = 4.0;
    printf("%f\n", b);
  
    // Character
    char c = 'a';
    printf("%c\n", c);

    // String, ie, character array
    char string[] = "1234abc";
    printf("%s\n", string);
  
    // Integer array 
    int array[] = {1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
        printf("%d ", array[i]);
    printf("\n");
 
    // Boolean 
    // Note: bools can be represented with the %d format specifier
    bool boolean = true;
    printf("%d\n", boolean);
  
    return 0;
}
