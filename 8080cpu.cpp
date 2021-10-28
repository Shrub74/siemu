#include <stdint.h>
#include <iostream>;

typedef struct ConditionCodes
{
    uint8_t z : 1;
    uint8_t s : 1;
    uint8_t p : 1;
    uint8_t cy : 1;
    uint8_t ac : 1;
    uint8_t pad : 3;

} ConditionCodes ;


typedef struct State8080
{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
    uint16_t sp;
    uint16_t pc;
    uint8_t* memory;
    struct   ConditionCodes cc;
    uint8_t int_enable;
} State8080;

void UnimplementedInstruction(State8080* state)
{
    printf("Error: Unimplemented instruction");
    exit(1);
}

int Emulate8080Op(State8080* state)
{
    unsigned char* opcode = &state->memory[state->pc];
    
    switch (*opcode)
    {
        // 00 - 0F
        case 0x00: UnimplementedInstruction(state); break;
        case 0x01: UnimplementedInstruction(state); break;
        case 0x02: UnimplementedInstruction(state); break;
        case 0x03: UnimplementedInstruction(state); break;
        case 0x04: UnimplementedInstruction(state); break;
        case 0x05: UnimplementedInstruction(state); break;
        case 0x06: UnimplementedInstruction(state); break;
        case 0x07: UnimplementedInstruction(state); break;
        case 0x08: UnimplementedInstruction(state); break;
        case 0x09: UnimplementedInstruction(state); break;
        case 0x0A: UnimplementedInstruction(state); break;
        case 0x0B: UnimplementedInstruction(state); break;
        case 0x0C: UnimplementedInstruction(state); break;
        case 0x0D: UnimplementedInstruction(state); break;
        case 0x0E: UnimplementedInstruction(state); break;
        case 0x0F: UnimplementedInstruction(state); break;
        // 10 - 1F
        case 0x10: UnimplementedInstruction(state); break;
        case 0x11: UnimplementedInstruction(state); break;
        case 0x12: UnimplementedInstruction(state); break;
        case 0x13: UnimplementedInstruction(state); break;
        case 0x14: UnimplementedInstruction(state); break;
        case 0x15: UnimplementedInstruction(state); break;
        case 0x16: UnimplementedInstruction(state); break;
        case 0x17: UnimplementedInstruction(state); break;
        case 0x18: UnimplementedInstruction(state); break;
        case 0x19: UnimplementedInstruction(state); break;
        case 0x1A: UnimplementedInstruction(state); break;
        case 0x1B: UnimplementedInstruction(state); break;
        case 0x1C: UnimplementedInstruction(state); break;
        case 0x1D: UnimplementedInstruction(state); break;
        case 0x1E: UnimplementedInstruction(state); break;
        case 0x1F: UnimplementedInstruction(state); break;
        // 20 - 2F
        case 0x20: UnimplementedInstruction(state); break;
        case 0x21: UnimplementedInstruction(state); break;
        case 0x22: UnimplementedInstruction(state); break;
        case 0x23: UnimplementedInstruction(state); break;
        case 0x24: UnimplementedInstruction(state); break;
        case 0x25: UnimplementedInstruction(state); break;
        case 0x26: UnimplementedInstruction(state); break;
        case 0x27: UnimplementedInstruction(state); break;
        case 0x28: UnimplementedInstruction(state); break;
        case 0x29: UnimplementedInstruction(state); break;
        case 0x2A: UnimplementedInstruction(state); break;
        case 0x2B: UnimplementedInstruction(state); break;
        case 0x2C: UnimplementedInstruction(state); break;
        case 0x2D: UnimplementedInstruction(state); break;
        case 0x2E: UnimplementedInstruction(state); break;
        case 0x2F: UnimplementedInstruction(state); break;
        // 30 - 3F
        case 0x30: UnimplementedInstruction(state); break;
        case 0x31: UnimplementedInstruction(state); break;
        case 0x32: UnimplementedInstruction(state); break;
        case 0x33: UnimplementedInstruction(state); break;
        case 0x34: UnimplementedInstruction(state); break;
        case 0x35: UnimplementedInstruction(state); break;
        case 0x36: UnimplementedInstruction(state); break;
        case 0x37: UnimplementedInstruction(state); break;
        case 0x38: UnimplementedInstruction(state); break;
        case 0x39: UnimplementedInstruction(state); break;
        case 0x3A: UnimplementedInstruction(state); break;
        case 0x3B: UnimplementedInstruction(state); break;
        case 0x3C: UnimplementedInstruction(state); break;
        case 0x3D: UnimplementedInstruction(state); break;
        case 0x3E: UnimplementedInstruction(state); break;
        case 0x3F: UnimplementedInstruction(state); break;
        // 40 - 4F
        case 0x40: UnimplementedInstruction(state); break;
        case 0x41: UnimplementedInstruction(state); break;
        case 0x42: UnimplementedInstruction(state); break;
        case 0x43: UnimplementedInstruction(state); break;
        case 0x44: UnimplementedInstruction(state); break;
        case 0x45: UnimplementedInstruction(state); break;
        case 0x46: UnimplementedInstruction(state); break;
        case 0x47: UnimplementedInstruction(state); break;
        case 0x48: UnimplementedInstruction(state); break;
        case 0x49: UnimplementedInstruction(state); break;
        case 0x4A: UnimplementedInstruction(state); break;
        case 0x4B: UnimplementedInstruction(state); break;
        case 0x4C: UnimplementedInstruction(state); break;
        case 0x4D: UnimplementedInstruction(state); break;
        case 0x4E: UnimplementedInstruction(state); break;
        case 0x4F: UnimplementedInstruction(state); break;
        // 50 - 5F
        case 0x50: UnimplementedInstruction(state); break;
        case 0x51: UnimplementedInstruction(state); break;
        case 0x52: UnimplementedInstruction(state); break;
        case 0x53: UnimplementedInstruction(state); break;
        case 0x54: UnimplementedInstruction(state); break;
        case 0x55: UnimplementedInstruction(state); break;
        case 0x56: UnimplementedInstruction(state); break;
        case 0x57: UnimplementedInstruction(state); break;
        case 0x58: UnimplementedInstruction(state); break;
        case 0x59: UnimplementedInstruction(state); break;
        case 0x5A: UnimplementedInstruction(state); break;
        case 0x5B: UnimplementedInstruction(state); break;
        case 0x5C: UnimplementedInstruction(state); break;
        case 0x5D: UnimplementedInstruction(state); break;
        case 0x5E: UnimplementedInstruction(state); break;
        case 0x5F: UnimplementedInstruction(state); break;
        // 60 - 6F
        case 0x60: UnimplementedInstruction(state); break;
        case 0x61: UnimplementedInstruction(state); break;
        case 0x62: UnimplementedInstruction(state); break;
        case 0x63: UnimplementedInstruction(state); break;
        case 0x64: UnimplementedInstruction(state); break;
        case 0x65: UnimplementedInstruction(state); break;
        case 0x66: UnimplementedInstruction(state); break;
        case 0x67: UnimplementedInstruction(state); break;
        case 0x68: UnimplementedInstruction(state); break;
        case 0x69: UnimplementedInstruction(state); break;
        case 0x6A: UnimplementedInstruction(state); break;
        case 0x6B: UnimplementedInstruction(state); break;
        case 0x6C: UnimplementedInstruction(state); break;
        case 0x6D: UnimplementedInstruction(state); break;
        case 0x6E: UnimplementedInstruction(state); break;
        case 0x6F: UnimplementedInstruction(state); break;
        // 70 - 7F
        case 0x70: UnimplementedInstruction(state); break;
        case 0x71: UnimplementedInstruction(state); break;
        case 0x72: UnimplementedInstruction(state); break;
        case 0x73: UnimplementedInstruction(state); break;
        case 0x74: UnimplementedInstruction(state); break;
        case 0x75: UnimplementedInstruction(state); break;
        case 0x76: UnimplementedInstruction(state); break;
        case 0x77: UnimplementedInstruction(state); break;
        case 0x78: UnimplementedInstruction(state); break;
        case 0x79: UnimplementedInstruction(state); break;
        case 0x7A: UnimplementedInstruction(state); break;
        case 0x7B: UnimplementedInstruction(state); break;
        case 0x7C: UnimplementedInstruction(state); break;
        case 0x7D: UnimplementedInstruction(state); break;
        case 0x7E: UnimplementedInstruction(state); break;
        case 0x7F: UnimplementedInstruction(state); break;
        // 80 - 8F
        case 0x80: UnimplementedInstruction(state); break;
        case 0x81: UnimplementedInstruction(state); break;
        case 0x82: UnimplementedInstruction(state); break;
        case 0x83: UnimplementedInstruction(state); break;
        case 0x84: UnimplementedInstruction(state); break;
        case 0x85: UnimplementedInstruction(state); break;
        case 0x86: UnimplementedInstruction(state); break;
        case 0x87: UnimplementedInstruction(state); break;
        case 0x88: UnimplementedInstruction(state); break;
        case 0x89: UnimplementedInstruction(state); break;
        case 0x8A: UnimplementedInstruction(state); break;
        case 0x8B: UnimplementedInstruction(state); break;
        case 0x8C: UnimplementedInstruction(state); break;
        case 0x8D: UnimplementedInstruction(state); break;
        case 0x8E: UnimplementedInstruction(state); break;
        case 0x8F: UnimplementedInstruction(state); break;
        // 90 - 9F
        case 0x90: UnimplementedInstruction(state); break;
        case 0x91: UnimplementedInstruction(state); break;
        case 0x92: UnimplementedInstruction(state); break;
        case 0x93: UnimplementedInstruction(state); break;
        case 0x94: UnimplementedInstruction(state); break;
        case 0x95: UnimplementedInstruction(state); break;
        case 0x96: UnimplementedInstruction(state); break;
        case 0x97: UnimplementedInstruction(state); break;
        case 0x98: UnimplementedInstruction(state); break;
        case 0x99: UnimplementedInstruction(state); break;
        case 0x9A: UnimplementedInstruction(state); break;
        case 0x9B: UnimplementedInstruction(state); break;
        case 0x9C: UnimplementedInstruction(state); break;
        case 0x9D: UnimplementedInstruction(state); break;
        case 0x9E: UnimplementedInstruction(state); break;
        case 0x9F: UnimplementedInstruction(state); break;
        // A0 - AF
        case 0xA0: UnimplementedInstruction(state); break;
        case 0xA1: UnimplementedInstruction(state); break;
        case 0xA2: UnimplementedInstruction(state); break;
        case 0xA3: UnimplementedInstruction(state); break;
        case 0xA4: UnimplementedInstruction(state); break;
        case 0xA5: UnimplementedInstruction(state); break;
        case 0xA6: UnimplementedInstruction(state); break;
        case 0xA7: UnimplementedInstruction(state); break;
        case 0xA8: UnimplementedInstruction(state); break;
        case 0xA9: UnimplementedInstruction(state); break;
        case 0xAA: UnimplementedInstruction(state); break;
        case 0xAB: UnimplementedInstruction(state); break;
        case 0xAC: UnimplementedInstruction(state); break;
        case 0xAD: UnimplementedInstruction(state); break;
        case 0xAE: UnimplementedInstruction(state); break;
        case 0xAF: UnimplementedInstruction(state); break;
        // B0 - BF
        case 0xB0: UnimplementedInstruction(state); break;
        case 0xB1: UnimplementedInstruction(state); break;
        case 0xB2: UnimplementedInstruction(state); break;
        case 0xB3: UnimplementedInstruction(state); break;
        case 0xB4: UnimplementedInstruction(state); break;
        case 0xB5: UnimplementedInstruction(state); break;
        case 0xB6: UnimplementedInstruction(state); break;
        case 0xB7: UnimplementedInstruction(state); break;
        case 0xB8: UnimplementedInstruction(state); break;
        case 0xB9: UnimplementedInstruction(state); break;
        case 0xBA: UnimplementedInstruction(state); break;
        case 0xBB: UnimplementedInstruction(state); break;
        case 0xBC: UnimplementedInstruction(state); break;
        case 0xBD: UnimplementedInstruction(state); break;
        case 0xBE: UnimplementedInstruction(state); break;
        case 0xBF: UnimplementedInstruction(state); break;
        // C0 - CF
        // D0 - DF
        // E0 - EF
        // F0 - FF

        default:
            break;
    }

    state->pc += 1;
}

int main(int argc, char** argv)
{
    
}