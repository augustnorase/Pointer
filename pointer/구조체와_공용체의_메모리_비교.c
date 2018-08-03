//
//  구조체와_공용체의_메모리_비교.c
//  pointer
//
//  Created by D.Ruin on 03/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

struct _sData{
    int n1;
    int n2;
};

union _uData{
    int n1;
    int n2;
};

void main(){
    struct _sData s1 = {10, 20};
    union _uData u1 = {10};
    
    printf("%d %d\n", sizeof(s1), sizeof(u1));
    printf("%d %d\n", s1.n1, s1.n2);    // 구조체는 멤버마다 메모리가 만들어짐
    printf("%d %d\n", u1.n1, u1.n2);    // 공용체는 멤버가 메모리를 공유
}
