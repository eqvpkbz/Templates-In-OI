#include <cstdio>

#define re register
#define Down(i, a) for(re int i = (a); ~i; -- i)

typedef long double ldb;

const int N = 20;

int n; ldb l, r, a[N];

int main() {
    scanf("%d%Lf%Lf", &n, &l, &r);
    Down(i, n) scanf("%Lf", &a[i]);       
    
    return 0;
}