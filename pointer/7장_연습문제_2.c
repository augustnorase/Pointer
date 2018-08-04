//
//  7장_연습문제_2.c
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
    struct _point arr[5] = {{10, 10}, {11, 11}, {12, 12}, {13, 13}, {14, 14}};
    struct _point *ap = arr;
    
    printf("%d %d\n", arr[0].x, arr[0].y);
    printf("%d %d\n", arr[1].x, arr[1].y);
    //...
    puts("==================================");
    printf("%d %d\n", ap[0].x, ap[0].y);
    printf("%d %d\n", ap[1].x, ap[1].y);
    //...
    puts("==================================");
    printf("%d %d\n", ap -> x, ap -> y);
    printf("%d %d\n", (ap+1) -> x, (ap+1) ->y);
}
