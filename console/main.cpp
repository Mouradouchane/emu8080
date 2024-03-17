
#ifndef includes
#define includes
    #include <iostream>
    #include "types.hpp"
    #include "disassembly8080.hpp"
#endif

#include <filesystem> // todo : move it to files.hpp

int main(char* argc , char** argv){

    std::filesystem::path roms_folder = "roms";

    if (std::filesystem::exists(roms_folder)) {
        std::cout << "roms folder found\n";
    }
    else {
        std::cout << "roms folder not found\n";
    }

    return 0;
}
