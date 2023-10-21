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
        printf("������ ���������� ����� (��� 0, ��� ���������):\n");
        if (scanf_s("%d", &number) != 1) {
            printf("����������� ���. ���� �����, ������ �����.\n");
            while (fgetc(stdin) != '\n');
            continue;
        }

        if (number == 0) {
            printf("��������� ������.\n");
            break;
        }

        if (number < 100 || number > 999) {
            printf("����� �� ���� �����������.\n");
            continue;
        }

        units = number % 10;
        tens = (number / 10) % 10;
        hundreds = number / 100;

        sum = units + hundreds;

        printf("���� ������ ����: %d\n", sum);

        printf("����:\n");
        printf("1 - ���������� ������\n");
        printf("2 - ��������� ������\n");
        printf("������ �����: ");
        if (scanf_s("%d", &choice) != 1) {
            printf("����������� ���. ��������� ������.\n");
            break;
        }
    } while (choice != 2);

    return 0;
}