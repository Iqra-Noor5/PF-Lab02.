#include <stdio.h>

int main() {
   char c='M';
   int n=42;
   float pi=3.141590;
   double m=98.765432;
   printf("Type Name\tVariable Value\tSize in Memory\n");
   printf("--------------------------------------------------\n");
    printf("char\t\t\'%c\'\t\t\t%zu byte(s)\n",c,sizeof(c));
    printf("int\t\t\t%d\t\t\t%zu byte(s)\n",n,sizeof(n));
    printf("float\t\t%f\t%zu byte(s)\n",pi,sizeof(pi));
    printf("double\t\t%f\t%zu byte(s)\n",m,sizeof(m));
    printf("-------------------------------------------------\n");
    return 0;
}