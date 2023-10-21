#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    int countGreaterThan10 = 0;
    int countGreaterThan5 = 0;

    printf("Введіть 10 чисел:\n");

    for (int i = 0; i < 10; i++) {
        printf("Число %d: ", i + 1);
        if (scanf_s("%d", &number) != 1) {
            printf("Некоректний ввід. Будь ласка, введіть число.\n");
            while (getchar() != '\n');
            i--;
            continue;
        }

        if (number > 10) {
            countGreaterThan10++;
        }
        else if (number > 5) {
            countGreaterThan5++;
        }
    }

    if (countGreaterThan10 > 4) {
        printf("Караул!\n");
    }
    else {
        printf("Більше 10: %d чисел\n", countGreaterThan10);
        printf("Більше 5: %d чисел\n", countGreaterThan5);
    }

    int choice;
    printf("Меню:\n");
    printf("1 - Продовжити роботу\n");
    printf("2 - Завершити роботу\n");
    printf("Оберіть опцію: ");

    if (scanf_s("%d", &choice) == 1 && choice == 1) {
        main();
    }
    else {
        printf("Завершуємо роботу.\n");
    }

    return 0;
}