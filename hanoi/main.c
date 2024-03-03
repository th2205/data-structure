#include <stdio.h>

// 이동 규칙
// 1. 한 번에 하나의 원반만 이동할 수 있다
// 2. 작은 원반 위에 큰 원반을 놓을 수 없다.
// 3. 세 개의 기둥 모두를 사용할 수 있다.
void hanoi(int n, char start, char work, char target)
{
    if (n == 1)
    {
        printf("%c에서 원반 %d를 %c로 이동\n", start, n, target);
    }
    else
    {
        hanoi(n - 1, start, target, work);                        // 단계 1: n-1개를 보조 기둥으로 이동
        printf("%c에서 원반 %d를 %c로 이동\n", start, n, target); // 단계 2: 가장 큰 원반을 목표 기둥으로 이동
        hanoi(n - 1, work, start, target);                        // 단계 3: n-1개를 보조 기둥에서 목표 기둥으로 이동
    }

    printf("\n");
}

void main()
{
    int n;
    printf("원반의 수: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
}
