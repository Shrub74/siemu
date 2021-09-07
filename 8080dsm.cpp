#include <iostream>
#include <stdio.h>

int disassembleOp(unsigned char *buffer, int pc)
// Processes and prints the current opcode
// Then returns the bytes used
{
    // Grab the code in the buffer at pc
    unsigned char *code = &buffer[pc];
    int opbytes = 1;
    printf("%04x \t", pc);

    switch(*code)
    {
        // Row 1
        case 0x00:
            printf("NOP");
            break;
        case 0x01:
            printf("LXI     BC, #%02x%02x", code[2], code[1]);
            opbytes = 3;
            break;
        case 0x02:
            printf("STAX    BC");
            break;
        case 0x03:
            printf("INX     B ");
            break;
        case 0x04:
            printf("INR     B ");
            break;
        case 0x05:
            printf("DCR     B ");
            break;
        case 0x06:
            printf("MVI     B,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x07:
            printf("RLC     ");
            break;
        case 0x08:
            printf("DSUB    BC");
            break;
        case 0x09:
            printf("DAD     BC");
            break;
        case 0xA:
            printf("LDAX    BC");
            break;
        case 0xB:
            printf("DCX     BC");
            break;
        case 0xC:
            printf("INR     C ");
            break;
        case 0xD:
            printf("DCR     C ");
            break;
        case 0xE:
            printf("MVI     C,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0xF:
            printf("RRC     A ");
            break;
        
        // Row 2
        case 0x10:
            printf("ARHL    ");
            break;
        case 0x11:
            printf("LXI     DE, #%02x%02x", code[2], code[1]);
            opbytes = 3;
            break;
        case 0x12:
            printf("STAX    D ");
            break;
        case 0x13:
            printf("INX     DE");
            break;
        case 0x14:
            printf("INR     D ");
            break;
        case 0x15:
            printf("DCR     D ");
            break;
        case 0x16:
            printf("MVI     D,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x17:
            printf("RAL     ");
            break;
        case 0x18:
            printf("RDEL    ");
            break;
        case 0x19:
            printf("DAD     DE");
            break;
        case 0x1A:
            printf("LDAX    DE");
            break;
        case 0x1B:
            printf("DCX     DE");
            break;
        case 0x1C:
            printf("INR     E ");
            break;
        case 0x1D:
            printf("DCR     E ");
            break;
        case 0x1E:
            printf("MVI     E,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x1F:
            printf("RAR     ");
            break;
        
        // Row 3
        case 0x20:
            printf("RIM     ");
            break;
        case 0x21:
            printf("LXI     HL, #%02x%02x", code[2], code[1]);
            opbytes = 3;
            break;
        case 0x22:
            printf("SHLD    , #%02x%02x", code[2], code[1]);
            opbytes = 3;
            break;
        case 0x23:
            printf("INX     HL");
            break;
        case 0x24:
            printf("INR     H ");
            break;
        case 0x25:
            printf("DCR     H ");
            break;
        case 0x26:
            printf("MVI     H,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x27:
            printf("DAA     ");
            break;
        case 0x28:
            printf("LDHI    DE,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x29:
            printf("DAD     H ");
            break;
        case 0x2A:
            printf("LHLD    , #%02x%02x", code[2], code[1]);
            opbytes = 3;
            break;
        case 0x2B:
            printf("DCX     H ");
            break;
        case 0x2C:
            printf("INR     L ");
            break;
        case 0x2D:
            printf("DCR     L ");
            break;
        case 0x2E:
            printf("MVI     L,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x2F:
            printf("CMA      ");
            break;

        // Row 4
        case 0x30:
            printf("SIM     ");
            break;
        case 0x31:
            printf("LXI     SP, #%02x%02x", code[2], code[1]);
            opbytes = 3;
            break;
        case 0x32:
            printf("STA       #%02x%02x", code[2], code[1]);
            opbytes = 3;
            break;
        case 0x33:
            printf("INX     SP");
            break;
        case 0x34:
            printf("INR     M ");
            break;
        case 0x35:
            printf("DCR     M ");
            break;
        case 0x36:
            printf("MVI     M,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x37:
            printf("STC     ");
            break;
        case 0x38:
            printf("LDSI    DE,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x39:
            printf("DAD     SP");
            break;
        case 0x3A:
            printf("LDA     , #%02x%02x", code[2], code[1]);
            opbytes = 3;
            break;
        case 0x3B:
            printf("DCX     SP");
            break;
        case 0x3C:
            printf("INR     A ");
            break;
        case 0x3D:
            printf("DCR     A ");
            break;
        case 0x3E:
            printf("MVI     A,  #%02x", code[1]);
            opbytes = 2;
            break;
        case 0x3F:
            printf("CMC      ");
            break;

        // Row 5
        case 0x40:
            printf("MOV     B,B");
            break;
        case 0x41:
            printf("MOV     B,C");
            break;
        case 0x42:
            printf("MOV     B,D");
            break;
        case 0x43:
            printf("MOV     B,E");
            break;
        case 0x44:
            printf("MOV     B,H");
            break;
        case 0x45:
            printf("MOV     B,L");
            break;
        case 0x46:
            printf("MOV     B,M");
            break;
        case 0x47:
            printf("MOV     B,A");
            break;
        case 0x48:
            printf("MOV     C,B");
            break;
        case 0x49:
            printf("MOV     C,C");
            break;
        case 0x4A:
            printf("MOV     C,D");
            break;
        case 0x4B:
            printf("MOV     C,E");
            break;
        case 0x4C:
            printf("MOV     C,H");
            break;
        case 0x4D:
            printf("MOV     C,L");
            break;
        case 0x4E:
            printf("MOV     C,M");
            break;
        case 0x4F:
            printf("MOV     C,A");
            break;

        // Row 6
        case 0x50:
            printf("MOV     D,B");
            break;
        case 0x51:
            printf("MOV     D,C");
            break;
        case 0x52:
            printf("MOV     D,D");
            break;
        case 0x53:
            printf("MOV     D,E");
            break;
        case 0x54:
            printf("MOV     D,H");
            break;
        case 0x55:
            printf("MOV     D,L");
            break;
        case 0x56:
            printf("MOV     D,M");
            break;
        case 0x57:
            printf("MOV     D,A");
            break;
        case 0x58:
            printf("MOV     E,B");
            break;
        case 0x59:
            printf("MOV     E,C");
            break;
        case 0x5A:
            printf("MOV     E,D");
            break;
        case 0x5B:
            printf("MOV     E,E");
            break;
        case 0x5C:
            printf("MOV     E,H");
            break;
        case 0x5D:
            printf("MOV     E,L");
            break;
        case 0x5E:
            printf("MOV     E,M");
            break;
        case 0x5F:
            printf("MOV     E,A");
            break;

        // Row 7
        case 0x60:
            printf("MOV     H,B");
            break;
        case 0x61:
            printf("MOV     H,C");
            break;
        case 0x62:
            printf("MOV     H,D");
            break;
        case 0x63:
            printf("MOV     H,E");
            break;
        case 0x64:
            printf("MOV     H,H");
            break;
        case 0x65:
            printf("MOV     H,L");
            break;
        case 0x66:
            printf("MOV     H,M");
            break;
        case 0x67:
            printf("MOV     H,A");
            break;
        case 0x68:
            printf("MOV     L,B");
            break;
        case 0x69:
            printf("MOV     L,C");
            break;
        case 0x6A:
            printf("MOV     L,D");
            break;
        case 0x6B:
            printf("MOV     L,E");
            break;
        case 0x6C:
            printf("MOV     L,L");
            break;
        case 0x6D:
            printf("MOV     L,L");
            break;
        case 0x6E:
            printf("MOV     L,M");
            break;
        case 0x6F:
            printf("MOV     L,A");
            break;

        // Row 8
        case 0x70:
            printf("MOV     M,B");
            break;
        case 0x71:
            printf("MOV     M,C");
            break;
        case 0x72:
            printf("MOV     M,D");
            break;
        case 0x73:
            printf("MOV     M,E");
            break;
        case 0x74:
            printf("MOV     M,H");
            break;
        case 0x75:
            printf("MOV     M,L");
            break;
        case 0x76:
            printf("HLT        ");
            break;
        case 0x77:
            printf("MOV     M,A");
            break;
        case 0x78:
            printf("MOV     A,B");
            break;
        case 0x79:
            printf("MOV     A,C");
            break;
        case 0x7A:
            printf("MOV     A,D");
            break;
        case 0x7B:
            printf("MOV     A,E");
            break;
        case 0x7C:
            printf("MOV     A,H");
            break;
        case 0x7D:
            printf("MOV     A,L");
            break;
        case 0x7E:
            printf("MOV     A,M");
            break;
        case 0x7F:
            printf("MOV     A,A");
            break;

        default:
            printf("---");

    }

    printf("\n");
    
    return opbytes;
}


int main(int argc, char** argv)
{
    // Open file specified by command line
    FILE *f = fopen(argv[1], "rb");
    // Check if loaded correctly
    if (f == NULL)
    {
        printf("Couldn't open file %s\n", argv[1]);
        exit(1);
    }

    // Set the file length to end of file and return
    fseek(f, 0L, SEEK_END);
    int fsize = ftell(f);
    fseek(f, 0L, SEEK_SET);

    // Allocate buffer of filesize
    unsigned char *buffer = (unsigned char*) malloc(fsize);
    
    // Load the whole file into the buffer and close the stream
    fread(buffer, fsize, 1, f);
    fclose(f);

    // Set the pointer
    int pc = 0;

    // Disassemble each opcode in the buffer
    while (pc < fsize)
    {
        pc += disassembleOp(buffer, pc);
    }

    // Exit
    return 0;
}   