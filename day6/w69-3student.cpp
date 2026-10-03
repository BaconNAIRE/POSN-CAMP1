#include <string>
// ส่งเฉพาะ FUNCTION
double fahrenheitToCelsius(double f) {
// ใส่โค้ดฟังก์ชันแปลงฟาเรนไฮต์เป็นเซลเซียส
    return 5.0*(f-32.0)/9.0;
}

std::string getPotionState(double c) {
// ใส่โค้ดฟังก์ชันแปลงฟาเรนไฮต์เป็นเซลเซียส
    if (c > 100) {
        return "VAPORIZED";
    } else if (c >= 0) {
        return "LIQUID";
    } else {
        return "FROZEN";
    }
}