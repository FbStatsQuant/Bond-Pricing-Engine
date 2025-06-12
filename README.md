# Bond Pricing Engine – C++

This project implements a modular, object-oriented **C++ library** for pricing **fixed-income instruments**, including **zero-coupon** and **coupon-bearing bonds**. It supports **discrete and continuous compounding**, calculates bond **prices**, recovers the **yield to maturity (YTM)**, and handles **duration**.

---

## 📌 Features

- Supports:
  - **Zero-Coupon Bonds**
  - **Coupon-Bearing Bonds**
- Discounting:
  - **Discrete compounding**
  - **Continuous compounding**
- Functionality:
  - Price computation
  - YTM recovery
  - Duration (zero-coupon implemented, coupon pending)
- Fully object-oriented: base class + polymorphism

---

## 📁 Files

| File              | Description                          |
|-------------------|--------------------------------------|
| `main.cpp`        | Demonstrates pricing logic           |
| `Bond.h/cpp`      | Abstract base class for all bonds    |
| `ZeroCouponBond.h/cpp` | Implements zero-coupon pricing |
| `CouponBond.h/cpp`| Implements coupon bond logic         |
| `bond_pricing.exe`| Optional executable (Windows)        |

---

## 🧪 Example Output

