
#ifndef IO_CPP
#define IO_CPP

#include "io.hpp"

HANDLE io_console_handle = GetStdHandle(STD_OUTPUT_HANDLE);

int message_box(std::string const& msg, int type = NORMAL_MESSAGE, bool wait_for_user_response = false) {

	int msg_type = (type == NORMAL_MESSAGE) ? NORMAL_MESSAGE : (type == MB_ICONWARNING) ? MB_ICONWARNING : MB_ICONERROR;
	int response = NULL;

	MessageBeep(type);

	if (wait_for_user_response) {

		response = MessageBoxA(NULL, msg.c_str(), TITLE, MB_OKCANCEL | msg_type);

		while (response == NULL) {
			Sleep(MESSAGE_BOX_INTERVAL);
		}

		return response;
	}

	MessageBoxA(NULL, msg.c_str(), TITLE, MB_OKCANCEL | msg_type);
	return response;
}

int message_box_error(std::string const& msg, bool wait_for_user_response) {

	return message_box(msg, ERROR_MESSAGE, wait_for_user_response);
}

int message_box_warn(std::string const& msg, bool wait_for_user_response) {

	return message_box(msg, WARN_MESSAGE, wait_for_user_response);
}

void log_msg(std::string const& msg) {
	SetConsoleTextAttribute(io_console_handle, WHITE);
	std::cout << " - " << msg << '\n';
	SetConsoleTextAttribute(io_console_handle, WHITE);
}

void log_hint(std::string const& msg) {
	SetConsoleTextAttribute(io_console_handle, LIGHT_GREEN);
	std::cout << "[HINT]    : " << msg << '\n';
	SetConsoleTextAttribute(io_console_handle, WHITE);
}

void log_error(std::string const& msg) {
	SetConsoleTextAttribute(io_console_handle, LIGHT_RED);
	std::cout << "[ERROR]   : " << msg << '\n';
	SetConsoleTextAttribute(io_console_handle, WHITE);
}

void log_warn(std::string const& msg) {
	SetConsoleTextAttribute(io_console_handle, YELLOW);
	std::cout << "[WARNING] : " << msg << '\n';
	SetConsoleTextAttribute(io_console_handle, WHITE);
}

#endif
