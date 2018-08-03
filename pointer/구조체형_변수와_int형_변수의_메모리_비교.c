//
//  구조체형_변수와_int형_변수의_메모리_비교.c
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
    int n1 = 10;
    struct _point p1 = {10, 10};
    
    printf("%d %d\n", sizeof(n1), sizeof(p1));
    // n1은 int형 변수라 4byte, p1은 구조체 변수로 int형 변수 2개라서 8byte
    printf("%d %d\n", sizeof(p1.x), sizeof(p1.y)); // 각각 int형 변수니까 4byte 출력

}
