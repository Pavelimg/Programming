#include <iostream>

namespace N {
    class GeometricalObject {
    };

    class Square : GeometricalObject {
    public:
        int height{};

        virtual int get_perimeter();

        virtual int get_area();

        virtual float get_diagonal();
    };

    class Cube : Square {
    public:
        int get_perimeter();

        int get_area();

        float get_diagonal();
    };

    class Parallelepiped : Square {
    public:
        int wight{};

        int get_perimeter();

        int get_area();

        float get_diagonal();
    };

}