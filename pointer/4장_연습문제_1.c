//
//  4장_연습문제_1.c
//  pointer
//
//  Created by D.Ruin on 03/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ap = (int*)arr;
    
    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    printf("%d %d %d %d %d\n", ap[0], ap[1], ap[2], ap[3], ap[4]);
}
