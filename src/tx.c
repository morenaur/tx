#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

#include "term.h"

int main(void) {
    printf("Enter q to exit.\n\n");
    enable_raw_mode();

    while (1) {
        char c = '\0';
        read(STDIN_FILENO, &c, 1);
        if (iscntrl(c)) {
            printf("%d\r\n", c);
        } else {
            printf("%d ('%c')\r\n", c, c);
        }

        if (c == 'q') break;
    }

    disable_raw_mode();
    return 0;
}
