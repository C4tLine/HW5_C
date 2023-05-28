#include <stdio.h>

struct Person {
    int age;
    char name[30];
};

float averageAge(struct Person arr[], int n) {
    int sum = 0; // Объявляем переменную сумму
    for (int i = 0; i < n; i++) {
        sum += arr[i].age; // Прибавляем возраст через указатель
    }
    return (float)sum / n; // Считаем средний возраст и возвращаем
}