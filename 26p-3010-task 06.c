#include <stdio.h>
int main() {
   float radi= 7.5;
    float pi = 3.14159;
   float diameter = 2*radi;
    float circumference = 2*pi*radi;
   float area =pi*radi*radi;
    printf("============ CIRCLE GEOMETRY REPORT ============\n");
    printf("Given Radius:              %.3fcm\n", radi);
    printf("Calculated Diameter:       %.3fcm\n", diameter);
    printf("Calculated Circumference:  %.3fcm\n", circumference);
    printf("Calculated Area:           %.3f sq.cm\n", area);
    printf("=======================================-=========\n");
    
}