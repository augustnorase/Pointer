//
//  int형 3차원 포인터.c
//  pointer
//
//  Created by D.Ruin on 02/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void main(){
    int n = 20; // 20 대입
    int *np;    // 여기부터 포인터 변수
    int **npp;
    int ***nppp;
    
    np = &n;    // &를 이용해 각 포인터 변수에 넣음
    npp = &np;
    nppp = &npp;
    
    printf("%d %d %d %d\n", n, *np, **npp, ***nppp);
    printf("%x %x %x %x\n", &n, np, *npp, **nppp);
    printf("%x %x %x\n", &np, npp, *npp);
    printf("%d %d %d %d\n", sizeof(int), sizeof(int*), sizeof(int**), sizeof(int***));  // 약간 책하고는 다른데? 책에서는 4 4 4 4 라고 나오는데 여기선 4 8 8 8 로 출력
    printf("%d %d %d %d\n", sizeof(n), sizeof(np), sizeof(npp), sizeof(nppp)); // 여기도 마찬가지
    // 포인터의 크기는 4byte 뭐가 새로 바뀐건지 다른 파일 때문에 이상한건지 모르겠음 일단 패스
}
