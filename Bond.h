#ifndef BOND_H
#define BOND_H

class Bond {
protected:
    double faceValue;
    double maturity;

public:
    Bond(double faceValue, double maturity);
    virtual ~Bond() {}

    virtual double price(double ytm, bool continuous) const = 0;
    virtual double duration(double ytm, bool continuous) const = 0;
    virtual double yieldToMaturity(double marketPrice, bool continuous) const = 0;
};

#endif
