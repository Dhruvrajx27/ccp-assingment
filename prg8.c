#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (int i = 0; i < n; i++) {
        int xi, yi, zi;
        scanf("%d %d %d", &xi, &yi, &zi);
        sum_x += xi;
        sum_y += yi;
        sum_z += zi;
    }


    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
