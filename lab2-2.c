#include <stdio.h>

int main() {
    printf("[----- [박조현] [2021053017] -----]");

    int i;       // 정수형 변수 i 선언
    int *ptr;    // 정수형 포인터 변수 ptr 선언
    int **dptr;  // 정수형 이중 포인터 변수 dptr 선언

    i = 1234;   // 변수 i에 값 할당
    printf("[checking values before ptr = &i] \n");  // ptr이 i의 주소를 가리키기 전 변수들의 값 및 주소 출력
    printf("value of i == %d\n", i);                // i의 값
    printf("address of i == %p\n", &i);             // i의 주소
    printf("value of ptr == %p\n", ptr);            // ptr의 값: 초기화되지 않았으므로 쓰레기 값 
    printf("address of ptr == %p\n", &ptr);         // ptr의 주소

    ptr = &i; // ptr이 i의 주소를 가리키도록 초기화

    printf("\n[checking values after ptr = &i] \n");   // ptr이 i를 가리키고 난 후 변수들의 값 및 주소 출력
    printf("value of i == %d\n", i);                   // i의 값
    printf("address of i == %p\n", &i);                // i의 주소
    printf("value of ptr == %p\n", ptr);               // ptr의 값: i를 가리키는 주소 
    printf("address of ptr == %p\n", &ptr);            // ptr의 주소
    printf("value of *ptr == %d\n", *ptr);             // ptr이 가리키는 값인 i의 값 

    dptr = &ptr; // dptr이 ptr을 가리키도록 초기화

    printf("\n[checking values after dptr = &ptr] \n");     // dptr이 ptr을 가리키기 전 변수들의 값 및 주소 출력
    printf("value of i == %d\n", i);                        // i의 값
    printf("address of i == %p\n", &i);                     // i의 주소
    printf("value of ptr == %p\n", ptr);                    // ptr의 값: i를 가리키는 주소 
    printf("address of ptr == %p\n", &ptr);                 // ptr의 주소
    printf("value of *ptr == %d\n", *ptr);                  // ptr이 가리키는 값인 i의 값 
    printf("value of dptr == %p\n", dptr);                  // dptr의 값: ptr을 가리키는 주소 
    printf("address of dptr == %p\n", &dptr);               // dptr의 주소
    printf("value of *dptr == %p\n", *dptr);                // dptr이 가리키는 값인 ptr의 값 
    printf("value of **dptr == %d\n", **dptr);              // *dptr이 가리키는 값인 ptr이 가리키는 값인 i의 값 

   
    *ptr = 7777;   // *ptr의 값을 변경하여 i의 값 변경
    printf("\n[after *ptr = 7777] \n");           // *ptr의 값을 변경한 후 결과 출력
    printf("value of i == %d\n", i);              // 변경된 i의 값
    printf("value of *ptr == %d\n", *ptr);        // ptr이 가리키는 값인 i의 값 
    printf("value of **dptr == %d\n", **dptr);    // *dptr이 가리키는 값인 ptr이 가리키는 값인 i의 값 


    
    **dptr = 8888; // **dptr의 값 변경하여 *ptr의 값 변경하여 i의 값 변경
    printf("\n[after **dptr = 8888] \n");        // **dptr의 값을 변경한 후 결과 출력
    printf("value of i == %d\n", i);             // 변경된 i의 값
    printf("value of *ptr == %d\n", *ptr);       // ptr이 가리키는 값인 i의 값
    printf("value of **dptr == %d\n", **dptr);   // *dptr이 가리키는 값인 ptr이 가리키는 값인 i의 값

    return 0;
}
//포인터와 이중 포인터의 개념을 확인하기 위한 코드
