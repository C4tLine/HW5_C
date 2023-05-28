#include <stdio.h>

int main() {
    int n, m; // Объявляем переменные
    scanf("%d %d", &n, &m); // Считываем кол-во строк и столбцов
    int matrix[n][m]; // Объявляем массив
    int col_sum[m]; // Объявляем массив-сумму
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]); // Считываем элементы массива
            col_sum[j] += matrix[i][j]; // Суммируем элементы в столбце
        }
    }
    int min_sum = col_sum[0], max_sum = col_sum[0]; // Объявляем макс и мин переменные-суммы
    int min_col = 0, max_col = 0; // Объявляем макс и мин перменные-столбцы
    for (int j = 1; j < m; j++) {
        if (col_sum[j] < min_sum) {
            min_sum = col_sum[j]; // Запоминаем минимальную сумму
            min_col = j;
        }
        if (col_sum[j] > max_sum) {
            max_sum = col_sum[j]; // Запоминаем максимальную сумму
            max_col = j;
        }
    }
    for (int i = 0; i < n; i++) {
        int buff = matrix[i][min_col]; // Запасная переменная
        matrix[i][min_col] = matrix[i][max_col]; // Меняем элементы местами
        matrix[i][max_col] = buff; // Сохраняем в запасной переменной
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]); // Вывод массива
        }
        printf("\n");
    }
    return 0;
}