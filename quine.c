#include <stdio.h>

int main(void) {
char* source = "#include <stdio.h>%c%cint main(void) {%cchar* source = \"%s\";%cprintf(source, 10, 10, 10, source, 10, 10, 10, 10)%c}%c";
printf(source, 10, 10, 10, source, 10, 10, 10);
}
