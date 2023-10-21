#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;

    do {
        int duration;

        printf("������ ��������� ������� (� ��������): ");
        if (scanf_s("%d", &duration) != 1) {
            printf("����������� ���. ���� �����, ������ ���� �����.\n");
            while (fgetc(stdin) != '\n');
            continue;
        }

        if (duration <= 0) {
            printf("���������� ���������. ���� �����, ������ ������� ������� ������.\n");
            continue;
        }

        printf("������ �������� �� %d ������.\n", duration);

        Sleep(duration * 1000);

        printf("��� ������! �������� ������.\a\n");

        printf("����:\n");
        printf("1 - ���������� ������\n");
        printf("2 - ��������� ������\n");
        printf("������ �����: ");

        if (scanf_s("%d", &choice) != 1) {
            printf("����������� ���. ���� �����, ������ 1 ��� 2.\n");
            while (fgetc(stdin) != '\n');
            continue;
        }
    } while (choice != 2);

    return 0;
}