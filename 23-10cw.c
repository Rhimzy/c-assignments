// if price is 10k there's a 10% discount, if the price is between 10-15k then 15% disc


#include <stdio.h>

void main() {
    int price, disc, net;
    printf("Enter price of the product: ");
    scanf("%d", &price);

    if (price == 10000) {
        disc = price * 0.1;
        net = price - disc;
    } else if (price < 15000 && price > 10000) {
        disc = price * 0.15;
        net = price - disc;
    } else {
        net = price;   // error handling
    }

    printf("%d will be the discounted price of the product", net);
} 
