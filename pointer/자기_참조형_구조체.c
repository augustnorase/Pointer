//
//  자기_참조형_구조체.c
//  pointer
//
//  Created by D.Ruin on 04/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

struct _node{
    int data;
    struct _node *link;
};

void main(){
    struct _node n1, n2, n3;
    
    n1.data = 10;
    n1.link = &n2;
    n2.data = 20;
    n2.link = &n1;
    
    n3.data = 30;
    n3.link = &n3;
    
    printf("%x %x %x\n", &n1, &n2, &n3);
    printf("%x %x %x\n", n1.link, n2.link, n3.link);
    
    printf("%d %d %d\n", n1.data, n2.data, n3.data);
    printf("%d %d %d\n", n1.link -> data, n2.link -> data, n3.link -> data);
    printf("%d %d %d\n", n1.link -> link -> data, n2.link -> link -> data, n3.link -> link -> data);
    // 일단 순환한다는 개념은 알겠지만 자주 쓰는건가? 연결리스트 쯤에나 쓰려나?
}
