#include <iostream>
#include "func.h"

int main(){
    int line = N::check_file();
    if (line == -1){
        std::cout << "file " << N::file_name << " not found. Creating it";
    }



}