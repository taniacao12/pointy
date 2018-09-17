#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned int num = 263824490;
	char *point = &num;
	
	printf("Number: %x \n", num);
	printf("Address: %p \n\n", point);
	
	printf("Bytes\n");
	for (int i = 0; i < 4; i++) {
		printf("Byte: %d \t Hex: %hhx \n", i, *point);
	}
	
	printf("\nModifying bytes by 1 \n");
	for (int i = 0; i < 4; i++){
		printf("Byte: %d \t Hex: %hhx \n", i, *point);
		*point++;
	}
	printf("increment bytes by 1: %x \n", num);

	*point = &num; // reset point

	printf("\nModifying bytes by 16 \n");
    for (int i = 0; i < 4; i++){
		printf("Byte: %d \t Hex: %hhx \n", i, *point);
        *point += 16;
    }
    printf("increment bytes by 16: %x \n", num);       
}