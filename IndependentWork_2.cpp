#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;

    do {
        int duration;

        printf("Введіть тривалість таймера (у секундах): ");
        if (scanf_s("%d", &duration) != 1) {
            printf("Некоректний ввід. Будь ласка, введіть ціле число.\n");
            while (fgetc(stdin) != '\n');
            continue;
        }

        if (duration <= 0) {
            printf("Некоректна тривалість. Будь ласка, введіть додатню кількість секунд.\n");
            continue;
        }

        printf("Таймер запущено на %d секунд.\n", duration);

        Sleep(duration * 1000);

        printf("Час вийшов! Звуковий сигнал.\a\n");

        printf("Меню:\n");
        printf("1 - Продовжити роботу\n");
        printf("2 - Завершити роботу\n");
        printf("Оберіть опцію: ");

        if (scanf_s("%d", &choice) != 1) {
            printf("Некоректний ввід. Будь ласка, введіть 1 або 2.\n");
            while (fgetc(stdin) != '\n');
            continue;
        }
    } while (choice != 2);

    return 0;
}