#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Nhập nhiệt độ C
    printf("Nhập nhiệt độ (°C): ");
    scanf("%f", &celsius);

    // Chuyển đổi sang độ F
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hiển thị kết quả
    printf("%.2f°C bằng %.2f°F\n", celsius, fahrenheit);

    return 0;
}
