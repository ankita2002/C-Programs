#include <stdio.h>

int main() {
int i;
char s[]="COMPUTER";
for(i=1;i<=8;i++)
printf("%-8.*s\n",i,s);
    return 0;
}
