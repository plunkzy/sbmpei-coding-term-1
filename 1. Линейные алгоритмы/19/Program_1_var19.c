//
// ������������ ������ �1 "�������� ���������".
// ������� ������ �19: "������� ��������� �����, ���������� � ��������. ����������, ������� ����������� ����� ������������ 1 ���, 5 ��� � 15 ��� ��� ������� �������� �����."
// ������������ 09.12.2023
// plunkzy education (by Voppor41)
//

#include <stdio.h>
#include <windows.h>

int main() {
    int amount;
    int coins1 = 0, coins5 = 0, coins15 = 0;

    printf("������� ����� � ��������: ");
    scanf("%d", &amount);

    coins15 = amount / 15;
    amount = amount % 15;

    coins5 = amount / 5;
    amount = amount % 5;

    coins1 = amount;

    printf("����� ������������ 1 �������: %d\n", coins1);
    printf("����� ������������ 5 ������: %d\n", coins5);
    printf("����� ������������ 15 ������: %d\n", coins15);

    return 0;
}