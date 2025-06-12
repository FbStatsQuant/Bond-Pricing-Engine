#include "CouponBond.h"
#include <cmath>

CouponBond::CouponBond(double faceValue, double maturity, double couponRate, int frequency)
    : Bond(faceValue, maturity), couponRate(couponRate), frequency(frequency) {}

double CouponBond::price(double ytm, bool continuous) const {
    double price = 0.0;
    int totalPeriods = static_cast<int>(maturity * frequency);
    double coupon = faceValue * couponRate / frequency;

    for (int t = 1; t <= totalPeriods; ++t) {
        double time = static_cast<double>(t) / frequency;
        if (continuous) {
            price += coupon * std::exp(-ytm * time);
        } else {
            price += coupon / std::pow(1 + ytm / frequency, t);
        }
    }

    // Add discounted face value
    if (continuous) {
        price += faceValue * std::exp(-ytm * maturity);
    } else {
        price += faceValue / std::pow(1 + ytm / frequency, totalPeriods);
    }

    return price;
}

double CouponBond::duration(double ytm, bool continuous) const {
    // Will implement next step
    return 0.0;
}

double CouponBond::yieldToMaturity(double marketPrice, bool continuous) const {
    // Will implement next step
    return 0.0;
}
