//
//  1byte_동적_메모리_할당.c
//  pointer
//
//  Created by D.Ruin on 07/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void main(){
    char *cp;
    
    cp = (char*) malloc(1); // 메모리 할당 함수 malloc(n)에서 n의 크기의 동적 메모리를 할당한다는 의미
    *cp = 'A';
    
    printf("%c\n", *cp);
    free(cp);   // 메모리 해제 함수. 없어도 돌아가기는 하는데 메모리 회수 때문에 넣음
}

// 동적 메모리에 대해서
// 힙 영역은 프로그램이 실행되는 동안에 메모리를 할당하고 해제할 수 있는 공간
