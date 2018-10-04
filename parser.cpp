#include <iostream>
#include <fstream>

#include "elf.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./parser <elf_file>\n";
        return -1;
    }

    std::ifstream is(argv[1], std::ifstream::in);

    ELF::Header header;
    is.read((char *) &header, sizeof(ELF::Header));

    return 0;
}