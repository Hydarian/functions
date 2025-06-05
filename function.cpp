// تابع computeTrinangle () که مساحت a و محیط p از یک کره با شعاع داده شده r بر میگرداند نوشته و ازمایش کنید
// void ComputeSphere(float& v, float& s, float r);



#include <iostream>
#include <cmath> // برای استفاده از pow و M_PI
using namespace std;

// تابع محاسبه حجم و مساحت کره
void ComputeSphere(float& v, float& s, float r) {
    v = (4.0f / 3.0f) * M_PI * pow(r, 3); // حجم
    s = 4 * M_PI * pow(r, 2);            // مساحت سطح
}

int main() {
    float radius;
    float volume, surface;

    cout << "Enter radius of the sphere: ";
    cin >> radius;

    ComputeSphere(volume, surface, radius);

    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << surface << endl;

    return 0;
}