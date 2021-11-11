//
//  main.c
//  lookfor fortune
//
//  Created by 汪航 on 2021/11/11.
//

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int truerand(void);
int main(int argc, const char * argv[]) {
    // insert code here...
    int x=0;
    srand(time(NULL));
    x=truerand()+truerand();
    if (x==7||x==11) {
        printf("win");
    }
    else if (x==2||x==3||x==12){
        printf("lose");
    }
    else{
        int y=0;
        do {
            y=truerand()+truerand();
            if (y==7) {
                printf("lose");
            }
            else if (y==x){
                printf("win");
            }
        } while (y!=7&&y!=x);
    }
    return 0;
}
int truerand(void){
    int y=0;
    y=1+rand()%6;
    return y;
}
