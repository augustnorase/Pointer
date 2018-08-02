//
//  char형_배열의_주소를_char형_1차원_포인터_변수에_저장.c
//  pointer
//
//  Created by D.Ruin on 02/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void main(){
    char carr[3] = {'A', 'B', 'C'};
    char *cp = carr;
    
    printf("%c %c %c\n", carr[0], carr[1], carr[2]);
    printf("%c %c %c\n", *carr, *(carr+1), *(carr+2));
    
    printf("%c %c %c\n", cp[0], cp[1], cp[2]);
    printf("%c %c %c\n", *cp, *(cp+1), *(cp+2));
    
    // 결과는 모두 A B C 지만 포인터와 배열은 다르다
}
