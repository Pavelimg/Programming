#include <iostream>
#include <cmath>

namespace N {
    class MegaString {
    private:
        int string_length;
        char *chars {new char[string_length]{}};
    public:
        MegaString(std::string str);
        int len();
    };
}