typedef struct {
    const char* name;
    int opcode;
    int funct7;
    int funct3;
} Instruction;

Instruction instructions[] = {
    {"ADD", 51, 0, 0},
    {"SUB", 51, 32, 0},
};
const int instruction_count = 2;