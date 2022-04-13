//
//  assignment4_Suienish Daulet_202055631.c
//  assignment4_Suienish Daulet_202055631
//
//  Created by Daulet Suienish on 2022/04/12.
//

#include <stdio.h>
int add(int value1, int value2);
int sub(int value1, int value2);
double multiply(int value1, int value2);
double divide(int value1, int value2);
int factorial(int value1);

int main(){
    int value1, value2;
    double sum;
    char o;
    
    do{
        printf("Choose an operator(+, -, *, /, !): ");
        scanf(" %c", &o);
        
        if (o == '+' || o == '-' || o == '*' || o == '/'){
            printf("Enter the first number: ");
            scanf("%d", &value1);
            printf("Enter the second number: ");
            scanf("%d", &value2);
            
                switch (o){
                    case '+':
                        sum = add(value1, value2);
                        printf("%d + %d = %lf\n", value1, value2, sum);
                        break;
                    case '-':
                        sum = sub(value1, value2);
                        printf("%d - %d = %lf\n", value1, value2, sum);
                        break;
                    case '*':
                        sum = multiply(value1, value2);
                        printf("%d * %d = %lf\n", value1, value2, sum);
                        break;
                    case '/':
                        sum = divide(value1, value2);
                        printf("%d / %d = %lf\n", value1, value2, sum);
                        break;
                    case 'q':
                        printf("Good Bye!\n");
                        return 0;
                    default:
                        printf("Enter one of the operators!\n");
                }
        }   else if (o == '!'){
                printf("Enter the number: ");
                scanf("%d", &value1);
                sum = factorial(value1);
                printf("%d!= %lf\n", value1, sum);
        }   else if (o=='q'){
                printf("Good Bye!\n");
                return 0;
        }   else{
                printf("Enter one of the operators!\n");
        }
//I did it initially using if-else statement but switch seems more convinient
//        if (o == '+'){
//            sum = add(value1, value2);
//            printf("%d + %d = %d\n", value1, value2, sum);
//        }
//        else if (o == '-'){
//            sum = sub(value1, value2);
//            printf("%d - %d = %d\n", value1, value2, sum);
//        }
//        else if (o == '*'){
//            sum = multiply(value1, value2);
//            printf("%d * %d = %d\n", value1, value2, sum);
//        }
//        else if (o == '/'){
//            sum = divide(value1, value2);
//            printf("%d / %d = %d\n", value1, value2, sum);
//        }
//        else if (o == '!'){
//            sum = factorial(value1);
//            printf("%d!= %d\n", value1, sum);
//        }
//        else{
//            printf("Enter one of the operators!");
//        }
    }while(o != 'q');
}

int add(int value1, int value2){
    return (value1 + value2);
}

int sub(int value1, int value2){
    return (value1 - value2);
}

double multiply(int value1, int value2){
    return ((double)value1 * (double)value2);
}

double divide(int value1, int value2){
    return ((double)value1 / (double)value2);
}
int factorial(int value1){
    if (value1 == 0 || value1 == 1){
        return 1;
    }else{
        return value1 * factorial(value1 - 1);
    }
}
