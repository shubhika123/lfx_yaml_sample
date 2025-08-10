#include <stdio.h>
#include "instructions.h"

int main() {
    printf("inst:\n");
    for (int i = 0; i < instruction_count; i++) {
        printf("  - name: %s\n", instructions[i].name);
        printf("    opcode: %d\n", instructions[i].opcode);
        printf("    funct7: %d\n", instructions[i].funct7);
        printf("    funct3: %d\n", instructions[i].funct3);
    }
    return 0;
}
