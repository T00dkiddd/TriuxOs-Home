#include "../drivers/screen.h"
#include "tree.h"

void tree()
{
    print("\nTriux Project Tree\n\n");

    print("Triux/\n");
    print("├── boot/\n");
    print("│   └── multiboot.asm\n");
    print("├── kernel/\n");
    print("│   └── kernel.c\n");
    print("├── drivers/\n");
    print("│   ├── screen.c\n");
    print("│   ├── keyboard.c\n");
    print("├── shell/\n");
    print("│   └── shell.c\n");
    print("├── commands/\n");
    print("│   ├── commands.c\n");
    print("│   ├── sysfetch.c\n");
    print("│   ├── whoami.c\n");
    print("│   ├── ls.c\n");
    print("│   ├── tree.c\n");
    print("├── libc/\n");
    print("│   └── string.c\n");

    print("\nEnd of tree.\n");
}
