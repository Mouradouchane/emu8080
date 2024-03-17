
#ifndef TYPES_HPP
#define TYPES_HPP

typedef struct cpu_registers {

    // ALU registers
    // general purpose registerss
    int8_t a = 0; // primary accumlator
    int8_t b = 0;
    int8_t c = 0;
    int8_t d = 0;
    int8_t e = 0;
    int8_t h = 0;
    int8_t l = 0;

    // temporary registers
    int8_t w = 0;
    int8_t z = 0;

    // flow registers
    uint16_t pc = 0; // program counter
    uint16_t sp = 0; // stack pointer

};

typedef struct cpu_flags{
    uint8_t s = 0; // sign flag
    uint8_t z = 0; // zero flag
    uint8_t p = 0; // parity flag
    uint8_t c = 0; // carry sflag

    // auxiliary carry flags
    uint8_t ac = 0; 
    uint8_t h  = 0; 
};

typedef struct cpu {
    cpu_flags flags;
    cpu_registers registers;
    
};

typedef struct instruction{
    
};

#endif
