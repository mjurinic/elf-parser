#include <cstdint>

typedef uint8_t  BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef uint64_t DWORDLONG;

namespace ELF {
    #pragma pack(push, 1)
    struct Header {
        DWORD ei_magic;
        BYTE ei_class;
        BYTE ei_data;
        BYTE ei_version;
        BYTE ei_osabi;
        BYTE ei_abiversion;
        BYTE e_pad[7];
        WORD e_type;
        WORD e_machine;
        DWORD e_version;
        DWORD e_entry;
        DWORD e_phoff;
        DWORD e_shoff;
        DWORD e_flags;
        WORD e_ehsize;
        WORD e_phentsize;
        WORD e_phnum;
        WORD e_shentsize;
        WORD e_shnum;
        WORD e_shstrndx;
    };
    #pragma pack(pop)
}