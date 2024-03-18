
#pragma once 

#ifndef DISASSEMBLY_8080_HPP
#define DISASSEMBLY_8080_HPP

#include "pch.h"
#include <stdint.h> 
#include <string>
#include "macros.hpp"
#include "types.hpp"

void parse( char* buffer , uint32_t size );

std::string* disassembly(char* buffer, uint32_t size);

#endif
