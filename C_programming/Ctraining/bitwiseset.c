#include<stdio.h>

int main() {
	printf("Here we are going to set \n");
    int a = 0x8;
    printf("The binary default value is %x\n", a);

    int mask = 0x1;
    printf("The binary default MASK value is %x\n", mask);
    mask=mask<<2;
    printf("Now the MASK is shifted to 2nd  bit and it will be %x\n", mask);
    int result = (a | mask);
    printf("The result after masking is %x\n", result);

    int b = 0x8;
    int c;
    printf("Enter the number of bit to be set : ");
    scanf("%d", &c);
	mask=0x1;
    mask = mask << c;
    printf("Now the MASK is shifted to %d bit and it will be %x\n", c, mask);
	/*
    for(int i = 0; i < (c - 1); i++) {
        mask = mask << 1;
        printf("Sample Xx", mask);
        return 0;
    }
	*/
    int result1 = (b | mask);
    printf("The result after masking is %x\n", result1);

    return 0;
}
