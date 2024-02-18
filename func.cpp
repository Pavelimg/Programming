#include "func.h"
#include <cmath>

namespace N {
    NGon::NGon(int sides, double length) {
        this->n = sides;
        this->side_length = length;
        this->angle = (sides - 2) * 180 / sides;
        this->outside_radius = side_length / (sin(PI / n) * 2);
        this->inside_radius = outside_radius * cos(PI / n);
    }

    double NGon::get_area() {
        return n / 4 * side_length * side_length * tan(PI / n);
    }

    double NGon::get_perimeter() {
        return n * side_length;
    }

    double NGon::get_inside_radius() {
        return inside_radius;
    }

    double NGon::get_outside_radius() {
        return outside_radius;
    }

    int NGon::get_n() {
        return n;
    }

    void NGon::set_n(int new_n) {
        n = new_n;
        this->angle = (n - 2) * 180 / n;
        this->outside_radius = side_length / (sin(PI / n) * 2);
        this->inside_radius = outside_radius * cos(PI / n);
    };

    double NGon::get_angle() {
        return angle;
    }

    double NGon::get_side_length() {
        return side_length;
    }

    void NGon::set_side_length(double new_side_length) {
        this->side_length = new_side_length;
        this->outside_radius = side_length / (sin(PI / n) * 2);
        this->inside_radius = outside_radius * cos(PI / n);
    }
}