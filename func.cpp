#include "func.h"
#include <fstream>
#include <string>

int N::check_file() { //
    std::string ignore_string;
    std::ifstream myfile;
    myfile.open(N::file_name);
    int start = 0;
    if (myfile.is_open()) {
        while (std::getline(myfile, ignore_string)) {
            start++;
        }
        return start;
    }
    return -1;
}

int N::create_file() {


}


    void N::do_something() {
    std::cout << "Doing something!" << std::endl;
}