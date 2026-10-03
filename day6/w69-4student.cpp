// ส่งเฉพาะ FUNCTION
bool isPrimeCrystal(long long n) {
// ใส่โค้ดฟังก์ชันตรวจสอบจำนวนเฉพาะ
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i=3; i<=n/2; i+=2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int countPrimeCrystals(long long L, long long R) {
// ใส่โค้ดฟังก์ชันนับจำนวนคริสตัลเฉพาะในช่วง [L, R]
    int prime_count = 0;
    for (int i=L; i<=R; ++i) {
        if (isPrimeCrystal(i)) prime_count++;
    }

    return prime_count;
}