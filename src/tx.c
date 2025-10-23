#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

#include "term.h"

int main(void) {
    printf("Enter q to exit.\n\n");
    enable_raw_mode();

    char c;
    while (read(STDIN_FILENO, &c, 1) == 1 && (c != 'q')) {
        if (iscntrl(c)) {
            printf("%d\r\n", c);
        } else {
            printf("%d ('%c')\r\n", c, c);
        }
    }

    disable_raw_mode();
    return 0;
}
