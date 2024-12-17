#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[128];
    FILE *fp;

    // popen()을 사용하여 "ls" 명령어 실행, 출력은 파이프를 통해 읽을 수 있음
    fp = popen("tree", "r");  // "r"은 읽기 모드
    if (fp == NULL) {
        perror("popen failed");
        return 1;
    }

    // 파이프에서 읽은 데이터를 출력에 저장하거나 처리할 수 있음
    printf("Output of 'ls' command:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        // 출력 내용(buffer)을 저장하거나 다른 작업을 할 수 있음
        printf("%s", buffer);  // 이 예시에서는 단순히 출력
    }

    // 파일 포인터 닫기
    fclose(fp);

    return 0;
}
