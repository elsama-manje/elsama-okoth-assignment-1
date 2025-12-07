#include <stdio.h>

struct Student {
    char name[50];
    float marks[3];
    float average;
};

float calculateAverage(float m[]) {
    return (m[0] + m[1] + m[2]) / 3.0;
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter 3 marks: ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
        }

        students[i].average = calculateAverage(students[i].marks);
    }

    printf("\n--- Student Results ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("Average Marks: %.2f\n", students[i].average);
    }

    return 0;
}
