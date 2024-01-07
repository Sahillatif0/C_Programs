#include<stdio.h>
struct student{
    int id;
    int marks[2];
};
void func(struct student *s){
    s->id = 21;
    s->marks[0] = 12;
    s->marks[1] = 15;
}
int main(){
    struct student s;
    char **w;
    printf("%d", sizeof(w));
    // func(&s);
    // printf("Student Id: %d\nMarks 1: %d\nMarks 2: %d", s.id,s.marks[0],s.marks[1]);
    return 0;
}