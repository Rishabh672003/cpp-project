#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>

using boost::multiprecision::cpp_dec_float_50;

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

    std::cout << "Float: " << std::setprecision(std::numeric_limits<float>::digits10) << area_f
         << std::endl;
    std::cout << "Double: " << std::setprecision(std::numeric_limits<double>::digits10)
         << area_d << std::endl;
    std::cout << "Boost Multiprecision: "
         << std::setprecision(std::numeric_limits<cpp_dec_float_50>::digits10) << area_mp
         << std::endl;
    return 0;
}
