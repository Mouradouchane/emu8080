
// for #define macros only

#ifndef MACROS_HPP
#define MACROS_HPP

// file persmissions
#define OPEN_FOR_READ  std::ios::in
#define OPEN_FOR_WRITE std::ios::out
#define BINARY_MODE std::ios::binary
#define SEEK_TO_THE_END std::ios::ate

// message box
#define NORMAL_MESSAGE 0
#define WARN_MESSAGE 1
#define ERROR_MESSAGE 2
// sleep time between each check if the user responce to message box
#define MESSAGE_BOX_INTERVAL 50 // ms

// console colors 
#define BLACK		 0x0 
#define BLUE         0x1 
#define GREEN        0x2 
#define AQUA         0x3 
#define RED          0x4 
#define PURPLE       0x5 
#define YELLOW       0x6 
#define LIGHT_GRAY   0x7
#define GRAY         0x8 
#define LIGHT_BLUE   0x9 
#define LIGHT_GREEN  0xA 
#define LIGHT_AQUA   0xB 
#define LIGHT_RED    0xC 
#define LIGHT_PURPLE 0xD 
#define LIGHT_YELLOW 0xE 
#define WHITE        0xF 
   
// program defs
#define TITLE "EMY-8080"

#endif
