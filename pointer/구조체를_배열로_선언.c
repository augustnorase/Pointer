//
//  구조체를_배열로_선언.c
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
    // sarr 배열은 연속적인 메모리라서 이렇게 가능. 8byte이므로 40byte의 크기 가짐 
    
    printf("(%d, %d)\n", sarr[0].x, sarr[0].y);
    printf("(%d, %d)\n", sarr[1].x, sarr[1].y);
    printf("(%d, %d)\n", sarr[2].x, sarr[2].y);
    // sarr[4]까지 계속됨...
}
