#include <stdio.h>

int main()
{
    
    char xy;

    printf("==========계산기============");


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
}