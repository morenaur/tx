#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

#include "term.h"

int main(void) {
    enable_raw_mode();

    char c;
    while (read(STDIN_FILENO, &c, 1) == 1 && (c != 'q')) {
        if (iscntrl(c)) {
            printf("%d\n", c);
        } else {
            printf("%d ('%c')\n", c, c);
        }
    }

    disable_raw_mode();
    return 0;
}
