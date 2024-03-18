
#include "includes.hpp"


int main(char* argc , char** argv){

    console_handle = GetStdHandle(STD_OUTPUT_HANDLE);

    // check if roms folder is exist
    if ( std::filesystem::exists(roms_folder) ) {
        log_hint("roms folder found");
        
        // todo : show to the user all the rom's in rom folder and let him select the rom
        std::string rom_file_path = (roms_folder.string() + "/invaders.h");
        
        FILE* file_rom = nullptr;
        errno_t open_result = fopen_s( &file_rom , rom_file_path.c_str() , "rb");

        char*  buffer = nullptr;
        size_t file_size = 0;

        if (file_rom != nullptr) {

            file_size = size_t(std::filesystem::file_size(rom_file_path));
            buffer = new char[(file_size + 1) * sizeof(char)];

            fseek(file_rom, 0,0);
            size_t readed = fread(buffer, 1, file_size, file_rom);

            std::cout << "ROM DATA : " << readed << " \n";
            for (size_t i = 0; i < file_size; i += 1) {
                if (buffer[i] != '\a') {
                    std::cout << buffer[i] << ' ';
                }
            }
            std::cout << "\n";

            delete[] buffer;
            fclose(file_rom);            
        }
        else {
            log_error("failed to open rom !");
        }

    }
    else {
        log_error("roms folder not found !");
        log_hint("make folder with name 'roms' and put your roms on it");

        return EXIT_FAILURE;
    }

    system("pause");
    return EXIT_SUCCESS;

}
