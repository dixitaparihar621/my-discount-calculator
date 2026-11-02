#include <stdio.h>

int main() {
    float price, discount, coupon, tax;
    float subtotal, discountAmt, afterDiscount;
    float couponAmt, afterCoupon, taxAmt, total, saved;
    int qty;

    printf("Enter price of one item: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    printf("Enter discount percent: ");
    scanf("%f", &discount);
    printf("Enter coupon percent: ");
    scanf("%f", &coupon);
    printf("Enter tax percent: ");
    scanf("%f", &tax);

    subtotal      = price * qty;
    discountAmt   = subtotal * discount / 100;
    afterDiscount = subtotal - discountAmt;

    couponAmt     = afterDiscount * coupon / 100;
    afterCoupon   = afterDiscount - couponAmt;

    taxAmt        = afterCoupon * tax / 100;
    total         = afterCoupon + taxAmt;
    saved         = discountAmt + couponAmt;

    printf("\nSubtotal : %.2f\n", subtotal);
    printf("Discount : %.2f\n", discountAmt);
    printf("Coupon   : %.2f\n", couponAmt);
    printf("Tax      : %.2f\n", taxAmt);
    printf("You pay  : %.2f\n", total);
    printf("You save : %.2f\n", saved);

    return 0;
}
