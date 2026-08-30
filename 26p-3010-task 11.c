#include <stdio.h>
int main() {
    int tea_q=3;double tea_p=60.00;
    int samosa_q=4;double samosa_p=40.50;
    int roll_q=2;double roll_p=120.00;

    double tea_total= tea_q*tea_p;
    double samosa_total=samosa_q*samosa_p;
    double roll_total=roll_q*roll_p;
    double subtotal=tea_total+ samosa_total+ roll_total;
    double gst =(16/100)* subtotal;
    double grand_total = subtotal + gst;

    printf("============== FAST CAFETERIA RECEIPT ================\n");
    printf("Item\tQty\t\tUnit Price (PKR)\tSubtotal (PKR)\n");
    printf("------------------------------------------------------\n");
    printf("Tea\t\t\t\t%d\t%.2f\t%.2f\n", tea_q,tea_p,tea_total);
    printf("Samosa\t\t\t%d\t%.2f\t%.2f\n", samosa_q,samosa_p, samosa_total);
    printf("Chicken Roll\t%d\t%.2f\t%.2f\n", roll_q,roll_p, roll_total);
    printf("------------------------------------------------------\n");
    printf("Subtotal:\t\t\t\t\tPKR %.2f\n", subtotal);
    printf("GST (16%%):\t\t\t\t\tPKR %.2f\n", gst);
    printf("-----------------------------------------------------\n");
    printf("Grand Total:\t\t\t\tPKR %.2f\n", grand_total);
    printf("============== THANK YOU FOR YOUR VISIT =============\n");
    return 0;}