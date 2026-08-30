#include <stdio.h>
int main() {
    double pf_marks=88.0;double pf_credits = 3;double calc_marks=76.5;double calc_credits = 3;double phy_marks=82.0;
    double phy_credits = 2;
    double total_credits=pf_credits+calc_credits+phy_credits;
    double weighted_avg=(88.0*3)+(76.50*3)+(82.0*2)/total_credits;
    printf("=============== SEMESTER ACADEMIC REPORT =============\n");
    printf("Course\t\t\tCredit Hours\tObtained Marks\n");
    printf("------------------------------------------------------\n");
    printf("Programming Fund\t\t\t%.0f\t\t%.2f\n",pf_credits, pf_marks);
    printf("Calculus   \t\t\t\t%.0f\t\t%.2f\n",calc_credits, calc_marks);
    printf("Applied Physics\t\t\t%.0f\t\t%.2f\n",phy_credits, phy_marks);
    printf("----------------------------------------------\n");
    printf("Total Credits: %.0f\t,\tWeighted Average: %.2f%%\n", total_credits, weighted_avg);
    printf("======================================================\n");
       return 0;}