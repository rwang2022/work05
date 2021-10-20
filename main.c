#include <stdio.h>

int main(){
	
	// step 1 - declare and initalize char, int, long
	char c = "k";
	int i = 5;
	long l = 1234;

	// step 2 - print addresses in decimal and hexadecimal
    printf("STEP 2\n")
	printf("char (decimal): %lu\t char (hexadecimal): %p\n", &c, &c);
	printf("int  (decimal): %lu\t int  (hexadecimal): %p\n", &i, &i);
	printf("long (decimal): %lu\t long (hexadecimal): %p\n", &l, &l);
	
	
	// step 3 - declare and initialize pointers for variables
	char *pc = &c;
    int  *pi = &i;
    long *pl = &l;

	// step 4 - print out the values of each pointer.
    printf("STEP 4\n")
	printf("char pointer value: %p\t", pc);
	printf("int  pointer value: %p\t", pi);
	printf("long pointer value: %p\t", pl);
	
	// step 5 - use the pointers to modify the values of the original variables and print out the new values
	*pc = 'm';
	*pi = 15;
	*pl = 54321;
	
    printf("STEP 5\n")
	printf("char pointer value: %c\n",pc);
	printf("int  pointer value: %i\n",pi);
	printf("long pointer value: %lu\n",pl);
	
	// step 6 - Declare and initialize an unsigned int variable and 2 pointers that point to it
    // one should be an int * and the other should be a char *
	unsigned int ui = 106;
	int  *ui_int = &u;
	char *ui_char = &u;
	
	// step 7 - Print out the value of each pointer (this should be the memory address), and 
    // de-reference each pointer to print out the value each points to.
    printf("STEP 7\n")
	printf("ui_int:  %p ui_int points to: %u\n", ui_int,  *ui_int);
	printf("ui_char: %p ui_char points to: %u\n", ui_char, *ui_char);
	
	// step 8 - print out your unsigned int in decimal and hex. 
    printf("STEP 8\n")
	printf("decimal: %u hexadecimal: %x\n", u, u);
	
	// step 9 - Use the char * to print out each individual byte of your unsigned int
    printf("STEP 9\n")
    for (int idx = 0; idx < 4; idx++) {
        printf("decimal byte:%hhu hexidecimal byte:%hhx\n", *(ui_int + idx), *(ui_int + idx));
    }

	// step 10 - Use the char * to increment each byte of the unsigned int by 1. Print out the unsigned int 
    // in both hex and decimal after each modification. When done, print out each byte like in step 9. 
	for (idx = 0; idx < 4; idx++) {
        (*(ui_char + idx))++;
        printf("decimal byte: %u hexidecimal byte:%x\n", *ui_int, *ui_int);
    }
    for (idx = 0; idx < 4; idx++) {
        printf("decimal byte:%hhu hexidecimal byte:%hhx\n", *(ui_char + idx), *(ui_char + idx));
    }

	// step 11 - Perform the same operation as in step 10, except add 16 to each byte. 
	for (idx = 0; idx < 4; idx++) {
        (*(ui_char + idx)) += 16;
        printf("decimal byte: %u hexidecimal byte:%x\n", *ui_int, *ui_int);
    }
    for (idx = 0; idx < 4; idx++) {
        printf("decimal byte:%hhu hexidecimal byte:%hhx\n", *(ui_char + idx), *(ui_char + idx));
    }
}