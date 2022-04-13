//
//  assignment2_Suienish Daulet_202055631.c
//  assignment2_Suienish Daulet_202055631
//
//  Created by Daulet Suienish on 2022/03/28.
//
#include <stdio.h>
#define wage_manager 9200
#define wage_employee 6300
#define tax_manager 0.12
#define tax_employee 0.09

int main(int argc, const char * argv[]) {
    char name_manager[10];
    printf("Enter manager's name: ");
    scanf("%s", *&name_manager);
    
    int hours_manager;
    printf("Enter managers's total hours: ");
    scanf("%d", &hours_manager);
    
    char name_employee[10];
    printf("Enter employee's name: ");
    scanf("%s", *&name_employee);
    
    int hours_employee;
    printf("Enter employee's total hours: ");
    scanf("%d", &hours_employee);
    
    double salary_manager;
    salary_manager = (hours_manager * wage_manager) * (1.00 - tax_manager);
    printf("Manager %s's salary is %.2f\n", name_manager, salary_manager);
    
    double salary_employee;
    salary_employee = (hours_employee * wage_employee) * (1.00 - tax_employee);
    printf("Employee %s's salary is %.2f\n", name_employee, salary_employee);
    
    printf("Monthly salary to be spent by the company is %.2f\n", salary_manager + salary_employee);
}
