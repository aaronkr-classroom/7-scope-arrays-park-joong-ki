#include <stdio.h>

void check_endianness() {
	//ù �޸� �ּҰ� 0x12�̸� �� ������̰�
	// 0x78�̸� �� ������̴�.
	unsigned int num = 0x12345678;
	unsigned char* byte_ptr = (unsigned char*)&num;

	for (int i = 0; i < sizeof(num); i++) {
		printf("%p    0x%02x\n", (byte_ptr + i), byte_ptr[i]);
	}

	if (byte_ptr[0] == 0x12) {
		printf("\n This is a big-endian system.");

	}
	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is a little-endian system");
	}
	else {
		printf("\nU");
	}
}


int main(void) {
	check_endianness();
	return 0;
}