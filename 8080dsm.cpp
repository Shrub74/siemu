#include <iostream>
#include <stdio.h>

int disassembleOp(unsigned char *buffer, int pc)
// Processes and prints the current opcode
// Then returns the bytes used
{
    // Grab the code in the buffer at pc
    unsigned char *code = &buffer[pc];
    int opbytes = 1;
    printf("%04x", pc);

    switch(*code)
    {
        case 0x00:
            printf("NOP");
            break;
    }

    printf("\n");
    
    return opbytes;
}


int main(int argc, char** argv)
{
    // Open file specified by command line
    FILE *f = fopen(argv[1], "rb");
    if (f == NULL)
    {
        printf("Couldn't open file %s\n", argv[1]);
        exit(1);
    }

    
}   