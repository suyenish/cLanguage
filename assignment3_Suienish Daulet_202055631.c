//
//  assignment3_Suienish Daulet_202055631.c
//  assignment3_Suienish Daulet_202055631
//
//  Created by Daulet Suienish on 2022/04/05.
//

#include <stdio.h>
#include <math.h>

int main() {
    unsigned int a;
    int i;
    int k;
    printf("Input the integer value: ");
    scanf("%d", &a);
    printf("Input the value of i'th bit: ");
    scanf("%d", &i);
    printf("Input the value of k: ");
    scanf("%d", &k);
    printf("i'th bit is %d\n", (a >> i) & 1);
    printf("value of a new integer is: %d\n", (1 << k) | a);
}
