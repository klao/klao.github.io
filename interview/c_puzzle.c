#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define FUNC(a,b)                               \
    a ^= b;                                     \
    b ^= a;                                     \
    a ^= b;                                     \

int main() {
    int n = 100;
    int v[100];
    int i, i1, i2;

    srand48(0);

    for (i = 0; i < n; ++i) {
        v[i] = i+1;
    }

    for (i = 0; i < n; ++i) {
        i1 = ceil(drand48() * n);
        i2 = ceil(drand48() * n);
        FUNC(v[i1], v[i2]);
    }

    for (i = 0; i < 100; ++i) {
        printf("%d\n", v[i]);
    }
}
