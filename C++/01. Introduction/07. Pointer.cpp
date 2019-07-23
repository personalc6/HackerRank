#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    int _a = *a+*b;
    int _b = abs(*a-*b);

    *a = _a;
    *b = _b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}