#include <stdio.h>
#define PRICE_COUNT_MAX 5

int product_prices[PRICE_COUNT_MAX] = {13, 140, 900, 2, 0};

int main(void) {
    for (int i = 0; i < PRICE_COUNT_MAX; ++i) {
        printf("%d: %10d DKK\n", i, product_prices[i]);
    }
    return 0;
}
