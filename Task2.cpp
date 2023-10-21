#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    int sum;
    int units, tens, hundreds;
    int choice;

    do {
        printf("Введіть трицифрове число (або 0, щоб завершити):\n");
        if (scanf_s("%d", &number) != 1) {
            printf("Некоректний ввід. Будь ласка, введіть число.\n");
            while (fgetc(stdin) != '\n');
            continue;
        }

        if (number == 0) {
            printf("Завершуємо роботу.\n");
            break;
        }

        if (number < 100 || number > 999) {
            printf("Число має бути трицифровим.\n");
            continue;
        }

        units = number % 10;
        tens = (number / 10) % 10;
        hundreds = number / 100;

        sum = units + hundreds;

        printf("Сума крайніх цифр: %d\n", sum);

        printf("Меню:\n");
        printf("1 - Продовжити роботу\n");
        printf("2 - Завершити роботу\n");
        printf("Оберіть опцію: ");
        if (scanf_s("%d", &choice) != 1) {
            printf("Некоректний ввід. Завершуємо роботу.\n");
            break;
        }
    } while (choice != 2);

    return 0;
}