#include <stdio.h>

int main() {
    int n, i;
    int coeff, exp;

    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    printf("The polynomial is: ");

    for (i = 0; i < n; i++) {
        printf("Enter the coefficient and exponent of the term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);

        if (coeff != 0) {
            if (i != 0 && coeff > 0) {
                printf("+");
            } else if (coeff < 0) {
                printf("-");
                coeff = -coeff;
            }

            if (coeff != 1 || exp == 0) {
                printf("%d", coeff);
            }

            if (exp != 0) {
                printf("x");
                if (exp != 1) {
                    printf("^%d", exp);
                }
            }
        }
    }

    printf("\n");
    printf("the polinomial is %d %d",coeff,exp);
    return 0;
}
