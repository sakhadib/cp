#include <stdio.h>

void read(int *age, float *cgpa, char *name){
    printf("Enter your age: ");
    scanf("%d", age);
    printf("Enter your cgpa: ");
    scanf("%f", cgpa);
    printf("Enter your name: ");
    scanf("%s", name);
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void add(int *x, int *y, int *res){
    *res = *x + *y;
}

int main() {
    int age, x = 10, y = 20, res;
    float cgpa;
    char name[100];

    read(&age, &cgpa, name);

    printf("Age: %d, CGPA: %f, Name: %s\n", age, cgpa, name);

    printf("Before Swap...\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap...\n");
    printf("x = %d, y = %d\n", x, y);

    add(&x, &y, &res);
    printf("x + y = %d\n", res);
    return 0;
}
