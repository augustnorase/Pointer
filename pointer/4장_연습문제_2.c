//
//  4장_연습문제_2.c
//  pointer
//
//  Created by D.Ruin on 03/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

int main(){
    int arr[2][2] = {{10, 20}, {100, 200}};
    int (*ap)[2] = arr;
    
    printf("%d %d %d %d\n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
    printf("%d %d %d %d\n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
    
    return 0;
}
