//
//  struct_point형 배열의 이름을 사용해 구조체 멤버에 접근.c
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
    struct _point sarr[5] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    
    printf("(%d, %d)\n", sarr->x, sarr->y);
    printf("(%d, %d)\n", (sarr+1)->x, (sarr+1)->y);
    // 계속해서 +4까지...
}
