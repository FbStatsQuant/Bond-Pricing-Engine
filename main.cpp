#include <iostream>
#include "ZeroCouponBond.h"
#include "CouponBond.h"

int main() {
    double ytm = 0.05;

    // === Zero-Coupon Bond ===
    ZeroCouponBond zb(1000.0, 5.0);
    std::cout << "Zero-Coupon Bond Pricing" << std::endl;
    double priceDisc = zb.price(ytm, false);
    double priceCont = zb.price(ytm, true);
    std::cout << "Price (Discrete): " << priceDisc << std::endl;
    std::cout << "Price (Continuous): " << priceCont << std::endl;
    double recoveredYTM = zb.yieldToMaturity(priceDisc, false);
    std::cout << "Recovered YTM (Discrete): " << recoveredYTM << std::endl;
    std::cout << "Duration: " << zb.duration(ytm, false) << std::endl;

    // === Coupon-Bearing Bond ===
    std::cout << "\nCoupon-Bearing Bond Pricing" << std::endl;
    CouponBond cb(1000.0, 10.0, 0.06, 2);  // 6% coupon, semiannual
    double cPriceDisc = cb.price(ytm, false);
    double cPriceCont = cb.price(ytm, true);
    std::cout << "Price (Discrete): " << cPriceDisc << std::endl;
    std::cout << "Price (Continuous): " << cPriceCont << std::endl;
    std::cout << "Duration: " << cb.duration(ytm, false) << std::endl;  // will be 0.0 for now

    return 0;
}


// g++ -std=c++20 -o bond_pricing main.cpp Bond.cpp ZeroCouponBond.cpp CouponBond.cpp

