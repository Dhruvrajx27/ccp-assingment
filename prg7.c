#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    long long flagstones_in_n = (n + a - 1) / a;
    long long flagstones_in_m = (m + a - 1) / a;
    long long total_flagstones = flagstones_in_n * flagstones_in_m;
    printf("%lld\n", total_flagstones);

    return 0;
}
