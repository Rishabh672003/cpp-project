#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>

using boost::multiprecision::cpp_dec_float_50;
using namespace std;

template <typename T> inline T area_of_a_circle(T r) {
    using boost::math::constants::pi;
    return pi<T>() * r * r;
}

int main() {
    float radius_f = 123.0 / 100;
    float area_f = area_of_a_circle(radius_f);

    double radius_d = 123.0 / 100;
    double area_d = area_of_a_circle(radius_d);

    cpp_dec_float_50 r_mp = 123.0 / 100;
    cpp_dec_float_50 area_mp = area_of_a_circle(r_mp);

    cout << "Float: " << setprecision(numeric_limits<float>::digits10) << area_f
         << endl;
    cout << "Double: " << setprecision(numeric_limits<double>::digits10)
         << area_d << endl;
    cout << "Boost Multiprecision: "
         << setprecision(numeric_limits<cpp_dec_float_50>::digits10) << area_mp
         << endl;
    return 0;
}
