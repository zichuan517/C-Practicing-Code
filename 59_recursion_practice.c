#include <stdio.h>

int fun(int x){
    if (x/2 > 1)
        fun(x/2);
    printf("%d",x);
}

int main(){
    fun(7);
    printf("\n");
    return 0;
}

/*
fun(7)
├── 条件成立 (7/2=3>1)
├── 调用 fun(3)
│   ├── 条件不成立 (3/2=1>1)
│   ├── 输出: 3
│   └── 返回
├── 输出: 7
└── 返回
*/