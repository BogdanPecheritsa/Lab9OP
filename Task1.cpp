#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number, positiveCount = 0, negativeCount = 0;
    int choice;

    do {
        positiveCount = 0;
        negativeCount = 0;
        printf("Введіть послідовність чисел (введіть 0, щоб завершити):\n");

        while (1) {
            printf("Введіть число: ");
            if (scanf_s("%d", &number) != 1) {
                printf("Некоректний ввід. Будь ласка, введіть число.\n");
                while (fgetc(stdin) != '\n');
                continue;
            }

            if (number == 0) {
                break;
            }

            if (number > 0) {
                positiveCount++;
            }
            else if (number < 0) {
                negativeCount++;
            }
        }
        printf("Кількість додатних чисел: %d\n", positiveCount);
        printf("Кількість від'ємних чисел: %d\n", negativeCount);

        printf("Меню:\n1 - Продовжити роботу\n2 - Завершити роботу\n");
        printf("Оберіть опцію: ");
        if (scanf_s("%d", &choice) != 1) {
            printf("Некоректний ввід. Будь ласка, введіть число.\n");
            while (fgetc(stdin) != '\n');
            continue;
        }

        if (choice == 2) {
            break;
        }
    } while (choice == 1);

    printf("Завершуємо роботу.\n");

    return 0;
}