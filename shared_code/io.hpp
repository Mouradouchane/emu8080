
#ifndef IO_HPP
#define IO_HPP

#include "macros.hpp"
#include <string>
#include <iostream>
#include <Windows.h>

extern HANDLE io_console_handle;

int message_box_error(std::string const& msg , bool wait_for_user_response = false);
int message_box_warn(std::string const& msg , bool wait_for_user_response = false);

void log_msg(std::string const& msg);
void log_hint(std::string const& msg);
void log_warn(std::string const& msg);
void log_error(std::string const& msg);

#endif
