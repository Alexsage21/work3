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
    puts("Введите число:");
    scanf("%d", &num);
    printf("Введено число %d\n", num);
    puts("Введите число:");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);
    printf("Сумма %d и %d: %d\nРазвность %d и %d: %d\nПроизведение %d и %d: %d\nЧастное %d и %d: %d\nОстаток от деления %d на %d: %d\n\n\n", num2, num, num2 + num, num2, num, num2 - num, num2, num, num * num2, num2, num, num2 / num, num2, num, num2 % num);
    //Z2
    printf("Введите количество дюймов:");
    scanf("%d", &dym);
    result = D * dym;
    printf("%d дюймов - это %.1f см \n", dym, result);
    printf("Введите количество испанских дюймов:");
    scanf("%d", &idym);
    result = I * idym;
    printf("%d испанских дюймов - это %.1f см \n", idym, result);
    printf("Введите количество старолитовских дюймов:");
    scanf("%d", &sdym);
    result = S * sdym;
    printf("%d старолитовских дюймов - это %.1f см \n", sdym, result);
    //Z2A2
    printf("Введите количество морских миль:");
    scanf("%d", &mmil);
    result = MM * mmil;
    printf("%d морских миль - это %.1f км \n", mmil, result);
    printf("Введите количество сухопутных миль:");
    scanf("%d", &smil);
    result = SM * smil;
    printf("%d сухопутных миль - это %.1f км \n", smil, result);
    printf("Введите количество римских миль:");
    scanf("%d", &rmil);
    result = RM * rmil;
    printf("%d римских миль - это %.1f км \n", rmil, result);
    printf("Введите количество старорусских миль:");
    scanf("%d", &stmil);
    result = STM * stmil;
    printf("%d старорусских миль - это %.1f км \n", stmil, result);
    printf("Введите количество географических миль:");
    scanf("%d", &gmil);
    result = GM * gmil;
    printf("%d географических миль - это %.1f км \n\n\n", gmil, result);
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
