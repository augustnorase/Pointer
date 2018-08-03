//
//  char형_1차원_배열을_2차원_배열처럼_접근하는_포인터.c
//  pointer
//
//  Created by D.Ruin on 03/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void main(){
    char carr[4] = {'A', 'B', 'C', 'D'};    // 배열
    char (*ap)[2] = (char(*)[2]) carr;  // (*ap)는 char형 포인터 변수 [2]는 주소 ap를 가산할 때 건너뛸 갯수
    // (char(*)[2])는 형변환
    
    printf("%c %c %c %c\n", carr[0], carr[1], carr[2], carr[3]);
    printf("%c %c %c %c\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
}
