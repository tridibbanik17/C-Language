#include <stdio.h>

// ----------------------------
// Auto Storage Class Examples
// ----------------------------

void auto_example1() {
    // Variables declared inside a function (without any specifier) are by default 'auto'
    // They have garbage values if uninitialized
    int i;
    auto char c;
    float f;
    printf("Auto Example 1 Output: %d %c %f\n", i, c, f); // Garbage values
}

void auto_example2() {
    // Demonstrates scope of auto variables
    int a = 10;
    {
        int a = 20; // Inner block 'a' shadows outer block 'a'
        printf("Auto Example 2 Inner Scope: %d\n", a); // Output: 20
    }
    printf("Auto Example 2 Outer Scope: %d\n", a); // Output: 10
}

// Auto Example 3 — Compilation error example (commented)
/*
void auto_example3() {
    // Variable 'a' is not accessible outside the block it was declared in
    {
        int a = 20;
        printf("%d", a); // OK
    }
    printf("%d", a); // Error: 'a' undeclared
}
*/

void auto_example4() {
    // A new 'a' is created in each iteration; previous value is lost
    int i;
    for (i = 0; i < 4; i++) {
        int a = 20;
        printf("Auto Example 4 Loop %d: %d\n", i, a); // Output: 20 every time
        a++; // This increment doesn't persist
    }
}

// ----------------------------
// Register Storage Class Examples
// ----------------------------

void register_example1() {
    // register hints to store variable in CPU register for faster access
    register int i;
    for (i = 1; i <= 10; i++) {
        printf("%d\t", i); // Output: 1 2 3 4 5 6 7 8 9 10
    }
    printf("\n");
}

// Register Example 2 — Compilation error (commented)
/*
void register_example2() {
    // Cannot get address of register variable
    register int a = 10;
    int *p = &a; // Error: address of register variable
    printf("%d", *p);
}
*/

// Register Example 3 — Compilation error (commented)
/*
void register_example3() {
    // Cannot scan into register variables (can't take address)
    register int a, b;
    scanf("%d%d", &a, &b); // Error: cannot take address
    printf("%d %d", a, b);
}
*/

// ----------------------------
// Static Storage Class Examples
// ----------------------------

int global_static = 0; // External by default (global scope)

void static_example1() {
    // Access global variable
    printf("Static Example 1 Global: %d\n", global_static); // Output: 0
}

static int static_global; // Static global variable (not visible in other files)

void static_example2() {
    // Static global variable behaves like a global, but only accessible in this file
    printf("Static Example 2 Global Static: %d\n", static_global); // Output: 0
}

void static_example3() {
    // Static local variables are initialized only once and retain value across calls
    static char c;
    static int i;
    static float f;
    printf("Static Example 3 Defaults: %d %d %.6f\n", c, i, f); // Output: 0 0 0.000000
}

void static_example4() {
    // Static initialized variable inside function
    static int i = 10;
    i = 25;
    printf("Static Example 4 Modified: %d\n", i); // Output: 25
}

void static_example5() {
    // Demonstrates persistence of static variable across function calls
    static int counter = 0;
    counter++;
    printf("Static Counter: %d\n", counter); // Demonstrates persistence
}

// ----------------------------
// Extern Storage Class Examples
// ----------------------------

// Declaration of variable defined elsewhere
extern int extern_var;

void extern_example1() {
    // extern_var is defined later — this declaration just tells compiler it exists
    printf("Extern Example 1: %d\n", extern_var); // Output: 42
}

// extern_example2 — Compilation error (commented)
/*
extern int extern_undefined; // Declared but not defined anywhere

void extern_example2() {
    // This will cause linker error if extern_undefined is not defined in another file
    printf("Extern Example 2: %d\n", extern_undefined); // Error
}
*/

// extern_example3 — Redeclared with initialization (valid)
int extern_var_initialized = 10;

void extern_example3() {
    // This will work and initialize variable only once
    printf("Extern Example 3: %d\n", extern_var_initialized); // Output: 10
}

// extern_example4 — Compilation error (commented)
/*
void extern_example4() {
    // Initialization of extern inside function not allowed
    extern int i = 10; // Error: initialization not allowed here
    printf("%d", i);
}
*/

// Define the extern variable
int extern_var = 42;

// ----------------------------
// MAIN FUNCTION
// ----------------------------

int main() {
    // Uncomment to test specific examples

    // ---- Auto ----
    auto_example1();
    auto_example2();
    auto_example4();

    // ---- Register ----
    register_example1();

    // ---- Static ----
    static_example1();
    static_example2();
    static_example3();
    static_example4();
    static_example5();
    static_example5();
    static_example5(); // Call multiple times to see persistence

    // ---- Extern ----
    extern_example1();
    extern_example3();

    return 0;
}
