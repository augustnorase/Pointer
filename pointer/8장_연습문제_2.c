//
//  8장_연습문제_2.c
//  pointer
//
//  Created by D.Ruin on 06/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void func(int *ap1, int (*ap2)[3]){
    printf("%d %d %d %d %d %d\n", ap1[0], ap1[1], ap1[2], ap1[3], ap1[4], ap1[5]);
    printf("%d %d %d %d %d %d\n", ap2[0][0], ap2[0][1], ap2[0][2], ap2[1][0], ap2[1][1], ap2[1][2]);
}

void main(){
    int arr1[6] = {10, 20, 30, 40, 50, 60};
    int arr2[2][3] = {{100, 200, 300}, {400, 500, 600}};
    
    func(arr1, arr2);
}
