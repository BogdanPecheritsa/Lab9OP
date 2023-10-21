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
        printf("������ ����������� ����� (������ 0, ��� ���������):\n");

        while (1) {
            printf("������ �����: ");
            if (scanf_s("%d", &number) != 1) {
                printf("����������� ���. ���� �����, ������ �����.\n");
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
        printf("ʳ������ �������� �����: %d\n", positiveCount);
        printf("ʳ������ ��'����� �����: %d\n", negativeCount);

        printf("����:\n1 - ���������� ������\n2 - ��������� ������\n");
        printf("������ �����: ");
        if (scanf_s("%d", &choice) != 1) {
            printf("����������� ���. ���� �����, ������ �����.\n");
            while (fgetc(stdin) != '\n');
            continue;
        }

        if (choice == 2) {
            break;
        }
    } while (choice == 1);

    printf("��������� ������.\n");

    return 0;
}