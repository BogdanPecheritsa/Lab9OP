#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    int countGreaterThan10 = 0;
    int countGreaterThan5 = 0;

    printf("������ 10 �����:\n");

    for (int i = 0; i < 10; i++) {
        printf("����� %d: ", i + 1);
        if (scanf_s("%d", &number) != 1) {
            printf("����������� ���. ���� �����, ������ �����.\n");
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
        printf("������!\n");
    }
    else {
        printf("������ 10: %d �����\n", countGreaterThan10);
        printf("������ 5: %d �����\n", countGreaterThan5);
    }

    int choice;
    printf("����:\n");
    printf("1 - ���������� ������\n");
    printf("2 - ��������� ������\n");
    printf("������ �����: ");

    if (scanf_s("%d", &choice) == 1 && choice == 1) {
        main();
    }
    else {
        printf("��������� ������.\n");
    }

    return 0;
}