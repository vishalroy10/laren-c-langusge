#include <stdio.h>


int main(){
    int marks1, marks2, marks3;
    printf("enter marks of student1:\n ");
    scanf("%d", &marks1);
    printf("enter marks of student2:\n ");
    scanf("%d", &marks2);
    printf("enter marks of student3:\n ");
    scanf("%d", &marks3);
    printf("the marks are %d %d %d\n", marks1, marks2, marks3);
    if (marks1 < 33 || marks2<33 || marks3 < 33){
        printf("student is fail\n");
    }
        else if((marks1 + marks2 + marks3)/3 < 40 ){
            printf("student is pass\n");
            }
            else{
                printf("student is pass with first class\n");
    }
    return 0;
}


