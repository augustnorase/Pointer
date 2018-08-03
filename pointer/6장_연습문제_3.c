//
//  6장_연습문제_3.c
//  pointer
//
//  Created by D.Ruin on 03/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

union _upoint{
    int x;
    int y;
};

void main(){
    union _upoint u1;
    
    u1.x = 10;
    u1.y = 20;
    
    printf("%d %d\n", u1.x, u1.y);  // 공용체는 나중에 선언된 값을 기반으로 공유
}

// p.203부터 
