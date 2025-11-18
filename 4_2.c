#include <stdio.h>
 int globalVar = 50;
 void testFunction() {
    int localVar = 10;  
    printf("Inside testFunction(): localVar = %d\n", localVar);
    printf("Inside testFunction(): globalVar = %d\n", globalVar);
 }
 int main() {
    testFunction();
    printf("Inside main(): globalVar = %d\n", globalVar);
    printf("\nNote: localVar cannot be accessed in main() because it is local to 
testFunction().\n");
    return 0;
 }
