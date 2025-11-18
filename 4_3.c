 #include <stdio.h>
 int main() {
    int x = 100;  
    printf("Inside main(): x = %d\n", x);
{
        int a = 10;   
        printf("Inside Block 1: a = %d\n", a);
        printf("Inside Block 1: x = %d\n", x);  
}
{
  int b = 20;
   printf("\nInside Block 2: b = %d\n", b);
}
{
  int x = 500;   
  printf("\nInside Block 3: shadowed x = %d\n", x);
}
    printf("Back in main(): x = %d\n", x);  
    return 0;
 }
