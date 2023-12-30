#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int foundAns = 0;

        if (n == 1 || n == 2 || n == 5) {
            foundAns = 1;
            printf("NO\n");
        }

        if (!foundAns)
            printf("YES\n");
    }

    return 0;
}
// credits: my friend Soumya
