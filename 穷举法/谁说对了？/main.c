//
//  main.c
//  谁说对了？
//
//  Created by 汪航 on 2021/11/4.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=0,b=0,c=0,d=0,e=0;
    for (a=1; a<=5; a++) {
        for (b=1; b<=5; b++) {
            if (a!=b) {
                for (c=1; c<=5; c++) {
                    if (a!=c&&b!=c) {
                        for (d=1; d<=5; d++) {
                            if (a!=d&&b!=d&&c!=d) {
                                for (e=1; e<=5; e++) {
                                    
                                    if (((b==2)+(a==3))==1&&((b==2)+(e==4))==1&&((c==1)+(d==2))==1&&((c==5)+(d==3))==1&&((e==4)+(a==1))==1) {
                                        printf("%d\n",(b==2)+(e==4));
                                        printf("%d %d %d %d %d\n",a,b,c,d,e);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
