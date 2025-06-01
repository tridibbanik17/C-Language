#include <stdio.h>

/*
  Typical memory size (in Bytes) for each data type.
  int             => 4 bytes
  float           => 4 bytes
  double          => 8 bytes
  char            => 1 byte
  unsigned int    => 4 bytes
  long            => 8 bytes
  long long       => 8 bytes
  short           => 2 bytes
  unsigned char   => 1 byte
  pointers        => 8 bytes (on 64-bit systems)
*/

int main() {
    int i = 77; 
    float f = 3.14f;
    double d = 3.1415926535;
    char c = 'A';
    unsigned int ui = 12345;
    long l = 123456789L;
    long long ll = 12345678012345LL;
    short s = 123;
    unsigned char uc = 255;
    void *ptr = &i;

    printf("int i = %d\n", i); 
    printf("Address of i = %p\n", (void*)&i);

    printf("unsigned int ui = %u\n", ui);
    printf("Address of ui = %p\n", (void*)&ui);

    printf("short s = %hd\n", s);
    printf("Address of s = %p\n", (void*)&s);

    printf("long l = %ld\n", l);
    printf("Address of l = %p\n", (void*)&l);

    printf("long long ll = %lld\n", ll);
    printf("Address of ll = %p\n", (void*)&ll);

    printf("unsigned char uc = %hhu\n", uc);
    printf("Address of uc = %p\n", (void*)&uc);

    printf("float f = %f\n", f);
    printf("Address of f = %p\n", (void*)&f);

    printf("double d = %lf\n", d);
    printf("Address of d = %p\n", (void*)&d);

    printf("char c = %c\n", c);
    printf("char (as int) = %d\n", c);
    /*
      (void *) is a form of pointer casting in C.
      (void *) is a generic pointer and can point to any data type.
      &c is the address of variable c (type: char *).
      (void *)&c casts &c address to a void * — a generic pointer type.
    */
    printf("Address of c = %p\n", (void *)&c);

    printf("string = %s\n", "Hello, C!");

    printf("Generic pointer ptr = %p\n", ptr);

    printf("Octal value of int i = %o\n", i);
    printf("Hexadecimal (lowercase) value of int i = %x\n", i);
    printf("Hexadecimal (uppercase) value of int i = %X\n", i);

    printf("Scientific notation of d = %e\n", d);
    printf("Scientific notation (uppercase) = %E\n", d);
    printf("Shortest representation = %g\n", d);

    printf("%% character (literal percent sign)\n");

    return 0;
}
