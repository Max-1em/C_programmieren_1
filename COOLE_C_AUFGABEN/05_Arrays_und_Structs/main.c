#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main(void)
{
    struct Student students[3] = {
        {"Anna", 21},
        {"Ben", 24},
        {"Clara", 22}
    };

    int i = 0;
    int sum = 0;
    int oldest_index = 0;
    float average = 0.0f;

    for (i = 0; i < 3; i++)
    {
        printf("%s - %d\n", students[i].name, students[i].age);
        sum += students[i].age;

        if (students[i].age > students[oldest_index].age)
        {
            oldest_index = i;
        }
    }

    average = sum / 3.0f;

    printf("Durchschnittsalter: %.2f\n", average);
    printf("Aeltester Student: %s\n", students[oldest_index].name);

    return 0;
}

// Made with Bob
