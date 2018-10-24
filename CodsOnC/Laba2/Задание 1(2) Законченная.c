#include <stdio.h>




    float add(float a, float b) {
    return a+b;
    }
    float dif(float a, float b) {
    return a-b;
    }
    float mul(float a, float b) {
    return a*b;
    } 
    float divi(float a, float b) {
    return a/b;
    }
    float mod(float a) {
    if (a>=0)
    return a;
    else
    return -a;
    }
    float ex(float a, float b) {
    if (b == 0) {
    return 1;
    }
    else {
    return a*ex(a, b-1);
    }
    }
    float expo(float a, float b) {
    return 1/ex(a,-b);
    }

int main()
{
    float a = ex(3,7);
    printf("%f\n", a);
    float b = dif(2,5);
    printf("%f\n", b);
    float c = divi(a,b);
    printf("%f\n", c);
    float d = mul(0.3,21);
    printf("%f\n", d);
    float e = ex(2,6);
    printf("%f\n", e);
    float g = dif(d,e);
    printf("%f\n", g);
    float v = mod(g);
    printf("%f\n", v);
    float z = ex(v,2);
    printf("%f\n", z);
    float t = expo(-3,-2);
    printf("%f\n", t);
    float i = divi(1,t);
    printf("%f\n", i);
    float u = add(z,i);
    printf("%f\n", u);
    return 0;
}