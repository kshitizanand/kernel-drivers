#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
	int dev = open("/dev/kshitiz", O_RDONLY);
	if (dev == -1) {
		printf("Opening not successful!");
		return -1;
	}
	printf("opening was successful!\n");
	close(dev);
	return 0;
}
