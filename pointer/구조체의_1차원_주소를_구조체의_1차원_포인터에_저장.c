//
//  구조체의_1차원_주소를_구조체의_1차원_포인터에_저장.c
//  pointer
//
//  Created by D.Ruin on 04/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

struct _point{
    int x;
    int y;
};

void main(){
    struct _point s1 = {10, 20};
    struct _point *sp = &s1;    // &s1은 _point 구조체의 1차원 주소
    
    printf("(%d, %d)\n", s1.x, s1.y);
    printf("(%d, %d)\n", sp -> x, sp -> y); // sp는 1차원 주소이므로 구조체 멤버를 접근할 때 이처럼 사용
}
