//
//  main.c
//  tiktactoe
//
//  Created by 汪航 on 2021/10/27.
//

#include <stdio.h>
int main()
{
    const int SIZE=3;
    int hang=0,lie=0;
    int qipan[SIZE][SIZE];
    for (hang=0;hang<SIZE;hang++){       //此处对数组qipan[][]初始化，元素赋值为0
        for (lie=0;lie<SIZE;lie++){
            qipan[hang][lie]=0;
        }
    }
    for (hang=0;hang<SIZE;hang++){     //此处将棋盘上棋子以1和0输入数组
        for (lie=0;lie<SIZE;lie++){
            scanf ("%d",&qipan[hang][lie]);
        }
    }
    int result1x=0,result0x=0;        //定义行中x的个数和0的个数；
    int result1y=0,result0y=0;        //定义列中x的个数和0的个数；
    int result1z=0,result0z=0;        //定义对角线中x的个数和0的个数；
    for (hang=0;hang<SIZE;hang++){
        result1x=result0x=0;
        result1y=result0y=0;
        for (lie=0;lie<SIZE;lie++){
            if(qipan[hang][lie]==1){    //此处遍历行
                result1x++;
            }
            else if(qipan[hang][lie]==0){
                result0x++;
            }
            if(qipan[lie][hang]==1){    //此处遍历列
                result1y++;
            }
            else if(qipan[lie][hang]==0){
                result0y++;
            }
        }
    }
    for (int i=0;i<SIZE;i++){            //此处检查正对角线
        if (qipan[i][i]==1){
            result1z++;
        }else if(qipan[i][i]==0){
            result0z++;
        }
    }
    result1z=0,result0z=0;
    for (int i=0;i<SIZE;i++){            //此处检查反对角线
        if (qipan[i][SIZE-1-i]==1){
            result1z++;
        }else if (qipan[i][SIZE-1-i]==0){
            result0z++;
        }
    }
    if (result1x==3||result1y==3||result1z==3){
        printf ("XX胜");
    } else if (result0x==3||result0y==3||result0z==3){
        printf ("OO胜");
    } else{
        printf ("平局");
    }

    return 0;
}

