//
//  char형 2차원 포인터.c
//  pointer
//
//  Created by D.Ruin on 02/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void main(){
    char c = 'A';   // c에 A 넣음
    char *cp;   // 포인터 변수 cp 선언
    char **cpp; // cp가 포인터 변수이므로 다차원 포인터에 저장해야함
    
    cp = &c;    // c를 cp에
    cpp = &cp;  // cp를 cpp에
    
    printf("%c %c %c\n", c, *cp, **cpp);
    printf("%x %x %x\n", &c, cp, *cpp);
}
