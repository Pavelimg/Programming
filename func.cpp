#include "func.h"

namespace N {
    MegaString::MegaString(std::string str){
        this->string_length = str.length();
        this->chars = {new char[string_length]{}};
        for (int i = 0; i < this->string_length; i++){
            this->chars[i] = str[i];
        }

    }

    int MegaString::len() {
        return this->string_length;
    }

}