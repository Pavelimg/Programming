#include <iostream>
#include "func.h"

void print_params(N::NGon n_gon) {
    std::cout << "============================  " << n_gon.get_n() << "-gon:  ============================" << std::endl;
    std::cout << "Side length = " << n_gon.get_side_length() << std::endl;
    std::cout << "Perimeter = " << n_gon.get_perimeter() << std::endl;
    std::cout << "Area = " << n_gon.get_area() << std::endl;
    std::cout << "Angle between sides = " << n_gon.get_angle() << std::endl;
    std::cout << "Inscribed circle radius = " << n_gon.get_inside_radius() << std::endl;
    std::cout << "Circumradius = " << n_gon.get_outside_radius() << std::endl << std::endl;

}

int main() {

    N::NGon pentagon = N::NGon(5, 10.0);
    print_params(pentagon);
    pentagon.set_n(8);
    print_params(pentagon);
    pentagon.set_side_length(20);
    print_params(pentagon);
}