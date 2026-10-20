#include <stdint.h>
void call_watcom3(uint32_t fn, uint32_t a, uint32_t d, uint32_t b) {
    __asm__ __volatile__(
        "call *%3"
        : "+a"(a), "+d"(d), "+b"(b)
        : "rm"(fn)
        : "ecx", "esi", "edi", "memory"
    );
}
