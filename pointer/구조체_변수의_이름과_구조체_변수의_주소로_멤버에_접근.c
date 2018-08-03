//
//  구조체_변수의_이름과_구조체_변수의_주소로_멤버에_접근.c
//  pointer
//
//  Created by D.Ruin on 03/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

struct _point{
    int x;
    int y;
};

void main(){
    struct _point p1 = {10, 10};
    
    printf("(%d, %d)\n", p1.x, p1.y);
    printf("(%d, %d)\n", (&p1) -> x, (&p1) -> y);   // 구조체 변수의 주소로 접근할 때는 -> 사용
    printf("(%d, %d)\n", (*&p1).x, (*&p1).y);   // 이건 옛날에 쓰던 거
}
