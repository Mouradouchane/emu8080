
#pragma once 

#ifndef FILES_HPP
#define FILES_HPP

#include <filesystem>
#include <string>

bool is_folder_exist(std::string const& folder_path);
bool is_file_exist(std::string const& file_path);

void create_file(std::string const& file_name , std::string const& path );
void open_file(std::string const& file_path , uint8_t permission = READ_WRITE_PERMISSION);
void close_file(file* file_handle);

#endif



