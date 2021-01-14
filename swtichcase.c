#include <stdio.h>
    int main() {
        int num = 3;
        switch (num) {
            case 1:
                printf("Pizza");
                printf("Rs 239");
                break;
            case 2:
                printf("Burger");
                printf("Rs 129");
                break;
            case 3:
                printf("Pasta");
                printf("Rs 179");
                break;
            case 4:
                printf("French Fries");
                printf("Rs 99");
                break;
            case 5:
                printf("Sandwich");
                printf("Rs 149");
                break;
            default:
                printf("Out of range");
                break;
        }
        return 0;
    }
