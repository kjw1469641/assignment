#include <stdio.h>

int main()
{
    
    char x;

    printf("==========계산기============");

    printf("\n원하는 기능을 선택하세요.\n");
    printf("1. 사칙연산\n2. 삼각함수\n3. 거듭제곱\n4. 진법변환\nx. 종료\n\n");

    printf("선택 : ");
    scanf(" %c", &x);

}

int basic() {
    int num1, num2, result;
    char operator;

    printf("\n사칙연산을 수행할 연산식을 입력해주세요.\n(+, -, *, /)\n");
    printf("(입력 예시) 102 + 308 [엔터]\n");
    printf("입력 : ");
    scanf_s(" %d %c %d", &num1, &operator, &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("\n%d + %d = %d\n", num1, num2, result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("\n%d - %d = %d\n", num1, num2, result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("\n%d × %d = %d\n", num1, num2, result);
    }
    else if (operator == '/') {
        result = num1 / num2;
        printf("\n%d ÷ %d = %.2f\n", num1, num2, (double)result);
    }

}

int square() {
    int x;

    printf("\n제곱하고 싶은 숫자를 입력해주세요.\n");
    printf("입력 : ");
    scanf_s("%d", &x);

    printf("입력한 숫자의 제곱은 %d 입니다.", x);
}

int binary() {
    int binary[50] = { 0, };
    int position = 0;
    int x;
    

    printf("\n진법을 변환할 수를 입력해주세요.\n");
    printf("입력 : ");
    scanf_s(" %d", &x);

    int num = x;

    while (1)
    {
        binary[position] = num % 2;
        num = num / 2;

        position++;

        if (num == 0)
            break;
    }

    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n%d를 2진수로 표현하면 %d입니다.\n", x, binary);
}