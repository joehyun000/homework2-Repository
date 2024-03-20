#include <stdio.h>

int main() {
    printf("[----- [박조현] [2021053017] -----]");
    // 각 타입의 변수를 선언하고, 그 크기를 담을 변수 생성
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    
    //변수의 크기를 각각 출력하기 위해 sizeof를 사용
    printf("Size of char: %ld byte\n", sizeof(charType));       //char형
    printf("Size of int: %ld bytes\n", sizeof(integerType));    //int형
    printf("Size of float: %ld bytes\n", sizeof(floatType));    //float형
    printf("Size of double: %ld bytes\n", sizeof(doubleType));  //double형
    printf("-----------------------------------------\n");
    
    // 원래 데이터 타입들의 크기를 각각 출력하기 위해 sizeof를 사용
    printf("Size of char: %ld byte\n", sizeof(char));         //char형
    printf("Size of int: %ld bytes\n", sizeof(int));          //int형
    printf("Size of float: %ld bytes\n", sizeof(float));      //float형
    printf("Size of double: %ld bytes\n", sizeof(double));    //double형
    printf("-----------------------------------------\n");
    
    // 포인터 변수들의 크기를 각각 출력하기 위해 sizeof를 사용
    printf("Size of char*: %ld byte\n", sizeof(char*));        //char형
    printf("Size of int*: %ld bytes\n", sizeof(int*));         //int형
    printf("Size of float*: %ld bytes\n", sizeof(float*));     //float형
    printf("Size of double*: %ld bytes\n", sizeof(double*));   //double형
    
    return 0;
}
//이 코드는 각 변수타입의 크기와 포인터 변수의 크기를 알아내는 코드