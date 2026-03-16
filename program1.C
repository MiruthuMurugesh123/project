#include <stdio.h>

int main() {
    int n, i, a;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Student %d (1=Present,0=Absent): ", i);
        scanf("%d", &a);

        if (a == 1)
            printf("Present\n");
        else
            printf("Absent\n");
    }
    return 0;
}
