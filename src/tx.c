#include <unistd.h>
#include "term.h"

int main(void) {
    enable_raw_mode();

    char c;
    while (read(STDIN_FILENO, &c, 1) == 1 && (c != 'q'));
    return 0;

    disable_raw_mode();
}
