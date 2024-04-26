#include <emscripten.h>
#include <math.h>

EMSCRIPTEN_KEEPALIVE
int add(int a, int b) {
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
int subtract(int a, int b) {
    return a - b;
}

EMSCRIPTEN_KEEPALIVE
int multiply(int a, int b) {
    return a * b;
}

EMSCRIPTEN_KEEPALIVE
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Simple gestion d'erreur pour la division par zéro
    }
}

EMSCRIPTEN_KEEPALIVE
int power(int base, int exp) {
    return (int)pow((double)base, (double)exp);
}

EMSCRIPTEN_KEEPALIVE
double squareRoot(int a) {
    return sqrt((double)a);
}