#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

#define D 2.54
#define I 2.32166
#define S 2.7076
#define MM 1.852
#define SM 1.609
#define RM 1.475
#define STM 7.468
#define GM 7412.6

int num;
int num2;

int dym;
int idym;
int sdym;
int mmil;
int smil;
int rmil;
int stmil;
int gmil;
float result;

int main()
{
    
    //Z1
    setlocale(LC_ALL, "RUS");
    puts("������� �����:");
    scanf("%d", &num);
    printf("������� ����� %d\n", num);
    puts("������� �����:");
    scanf("%d", &num2);
    printf("������� ����� %d\n", num2);
    printf("����� %d � %d: %d\n�������� %d � %d: %d\n������������ %d � %d: %d\n������� %d � %d: %d\n������� �� ������� %d �� %d: %d\n\n\n", num2, num, num2 + num, num2, num, num2 - num, num2, num, num * num2, num2, num, num2 / num, num2, num, num2 % num);
    //Z2
    printf("������� ���������� ������:");
    scanf("%d", &dym);
    result = D * dym;
    printf("%d ������ - ��� %.1f �� \n", dym, result);
    printf("������� ���������� ��������� ������:");
    scanf("%d", &idym);
    result = I * idym;
    printf("%d ��������� ������ - ��� %.1f �� \n", idym, result);
    printf("������� ���������� �������������� ������:");
    scanf("%d", &sdym);
    result = S * sdym;
    printf("%d �������������� ������ - ��� %.1f �� \n", sdym, result);
    //Z2A2
    printf("������� ���������� ������� ����:");
    scanf("%d", &mmil);
    result = MM * mmil;
    printf("%d ������� ���� - ��� %.1f �� \n", mmil, result);
    printf("������� ���������� ���������� ����:");
    scanf("%d", &smil);
    result = SM * smil;
    printf("%d ���������� ���� - ��� %.1f �� \n", smil, result);
    printf("������� ���������� ������� ����:");
    scanf("%d", &rmil);
    result = RM * rmil;
    printf("%d ������� ���� - ��� %.1f �� \n", rmil, result);
    printf("������� ���������� ������������ ����:");
    scanf("%d", &stmil);
    result = STM * stmil;
    printf("%d ������������ ���� - ��� %.1f �� \n", stmil, result);
    printf("������� ���������� �������������� ����:");
    scanf("%d", &gmil);
    result = GM * gmil;
    printf("%d �������������� ���� - ��� %.1f �� \n\n\n", gmil, result);
    //Z3
    int a, b;
    a = 3;
    b = 5;
    int u = a * b;
    int s = a + b;
    int r = a - b;
    printf("|%4s |%4s |%4s |\n", "a*b", "a+b", "a-b");
    printf("-------------------\n");
    printf("|%2d*%-2d|%2d+%-2d|%2d-%-2d|\n", a, b, a, b, a, b);
    printf("-------------------\n");
    printf("|%4d |%4d |%4d |", u, s, r);
}