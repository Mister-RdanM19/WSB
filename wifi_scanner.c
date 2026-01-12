#include <stdio.h>

int main() {
    FILE *fp = popen("nmcli -t -f SSID,SIGNAL dev wifi", "r");
    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    pclose(fp);
}
