int max_of_four(int, int, int, int);
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int t1,t2,t;
    t1 = ((a>b)?a:b);
    t2 = ((c>d)?c:d);
    t = ((t1>t2)?t1:t2);
    return t;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

