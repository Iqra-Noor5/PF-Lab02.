#include <stdio.h>
int main() {
    double basic_salary = 85000.00;
  double h=0.20*basic_salary;
   double p=0.10 *basic_salary;
    double gross_salary=basic_salary+h+p;
    double tax=0.05*gross_salary;
    double net_salary=gross_salary-tax;
    printf("========-===== MONTHLY SALARY SLIP ==============\n");
    printf("Basic Salary:  \tPKR %.2f\n", basic_salary);
    printf("House-Rent Allowance (20%):\tPKR %.2f\n",h);
    printf("Medical Allowance (10%):\tPKR %.2f\n",p);
    printf("------------------------------------------------\n");
    printf("Gross Salary:\t\t\tPKR %.2f\n", gross_salary);
    printf("Tax Deduction (5%):\t\tPKR %.2f\n",tax);
    printf("------------------------------------------------\n");
    printf("Net Payable Salary:\t\tPKR %.2f\n",net_salary);
    printf("===============================--===============\n");
    return 0;
}