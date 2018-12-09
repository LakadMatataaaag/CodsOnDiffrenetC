#include <stdio.h>
#include <math.h>

#define N 4

float averation(float* n, unsigned int length)
{
    float average = 0;
    for(int i = 0; i < length; i++)
    {
        average = average + *(n + i); // Тоже самое если av = av + n[i], сумма в формуле
    }
    float average1 = average / length;
    return average1;
}

float std(float* arr, unsigned int length){
    float result = 0;
    float average = averation(arr, length);
    for(int i = 0; i < length; i++)
    {
        result = result +  pow((*(arr + i) - average),2); // Скобку в квадрат + сумма
    }
    float st = result / length;
    float st1 = sqrt(st); // Взяли корень всего выражения
    return st1;
}

int main() {
    float arr[N];
    float result;
    for(int i = 0; i < N; i++)
    {
        scanf("%f", &arr[i]); // Ввести 4 числа
    }
    result = std(arr, N);
    printf("%f", result);
    return 0;
}


  
