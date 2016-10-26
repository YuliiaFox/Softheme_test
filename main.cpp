#include <stdio.h>
#include <math.h>

#define power_nine 59049 // 9 в 5 степені

int main() {
    int number_of_digits = 1;
    int limit = 1;
    int temp = 0;
    int result = 0;
    do {/*обчислюємо ліміт, до якого будемо перебирати числа*/
        limit = number_of_digits * power_nine;
        temp = 10 * temp + 9;
        number_of_digits++;
    } while (temp <= limit);

    for (int i=2;i <= limit;i++) {
        temp = i;
        int sum = 0;

        while (temp != 0) { /*отримуємо суму цифр*/
            sum += pow((temp % 10), 5);
            temp = (temp - (temp % 10)) / 10;
        }
        if (i == sum) {
            result += i;
        }
    }

    printf("\n Сума: %i", result);
    return 0;

}