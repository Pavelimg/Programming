#include <iostream>
#include <cmath>

namespace N {
    class NGon {
    private:

        int n;
        double side_length, inside_radius, outside_radius, angle;
        const double PI = acos(-1.0);
    public:
        NGon(int sides, double length);
        double get_area();

        double get_perimeter();

        double get_outside_radius();

        double get_inside_radius();

        double get_angle();

        int get_n();

        void set_n(int new_n);

        double get_side_length();

        void set_side_length(double new_side_length);


    };
}