//
//  assignment1_SuienishDaulet_202055631.c
//  assignment1_Suienish Daulet_ 202055631
//
//  Created by Daulet Suienish on 2022/03/11.
//
//Professor, I code on the Xcode and if there will be some problems, please let me know. If my code will not run on your computer, i will write code on visual studio and resend it. Thank you^^
#include <stdio.h>

int main(void) {
    // initializing student Id
    int studentID = 202055631;
    // initializing subjects and scores
    int cProgramming = 90;
    int unix = 85;
    int linearAlgebra = 83;
    int dataScience = 93;
    int web = 87;
    int discreteMathematics = 93;
    // initializing variable for the average score
    float averageScore;
    // formula of averageScore is all of the scores added and divided by the number of subjects
    averageScore = (cProgramming + unix + linearAlgebra + dataScience + web + discreteMathematics) / 6.0;
    // printing student ID of the student
    printf("This is scores of the student with ID %d\n", studentID);
    //printing subjects and their scores
    printf("\nC Programming = %d\n", cProgramming);
    printf("Unix = %d\n", unix);
    printf("Linear Algebra = %d\n", linearAlgebra);
    printf("Introduction to Data Science = %d\n", dataScience);
    printf("Introduction to the Internet and Web = %d\n", web);
    printf("Discrete Mathematics = %d\n", discreteMathematics);
    //printing average score. %.2f is used to show 2 digits after the floating point, so there are not too many zeros after it
    printf("\nThe average score is %.2f\n", averageScore);
}
