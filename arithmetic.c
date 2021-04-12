#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float add (float x,float y){
    return x + y;
}

EMSCRIPTEN_KEEPALIVE
float sub (float x, float y){
    return x - y;
}

EMSCRIPTEN_KEEPALIVE
float mul (float x, float y){
    return x * y;
}

EMSCRIPTEN_KEEPALIVE
float div (float x, float y){
    return x / y;
}