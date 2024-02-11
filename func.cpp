#include "func.h"
#include <fstream>
#include <string>
#include <iomanip>
#include <chrono>

int N::check_file() { //
    std::string ignore_string;
    std::ifstream myfile;
    myfile.open(N::file_name);
    int start = 1;
    if (myfile.is_open()) {
        while (std::getline(myfile, ignore_string)) {
            start++;
        }
        return start;
    }
    return start;
}

void N::new_run(int run_number) {
    std::ofstream outfile(N::file_name.c_str(), std::ios::app);
    __time64_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    outfile << std::to_string(run_number) << std::put_time(std::localtime(&time), "-%Y-%m-%d-%H-%M-%S") << std::endl;
}
