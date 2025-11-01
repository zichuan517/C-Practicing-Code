#include <stdio.h>

typedef struct Student{
    char name[20];
    int age;
    double score;
}Student;

void input_student_info(Student* stu){
    printf("enter the student's name:");
    scanf("%s", stu->name);
    printf("enter the student's age:");
    scanf("%d", &stu->age);
    printf("enter the student's score:");
    scanf("%lf", &stu->score);
}

int main(){
    Student stu;
    input_student_info(&stu);
    printf("confirm that: %s is a %d year old teenager , and the score is %.2f", stu.name, stu.age, stu.score);
    return 0;
}