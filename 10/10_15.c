#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-28
 * 页码： 第302页
 * 目的： 指针和多维数组
 */

int main(void)
{
    int zippo[4][2] = {
        {2, 4},
        {6, 8},
        {1, 3},
        {5, 7}
    };

    printf("     zippo    = %p, zippo+1    = %p\n", zippo, zippo + 1);
    printf("     zippo[0] = %p, zippo[0]+1 = %p\n", zippo[0], zippo[0] + 1);
    printf("     *zippo   = %p, *zippo+1   = %p\n", *zippo, *zippo + 1);
    printf("     zippo[0][0] = %d\n", zippo[0][0]);
    printf("     *zippo[0] = %d\n", *zippo[0]);
    printf("     **zippo = %d\n", **zippo);
    printf("     zippo[2][1] = %d\n", zippo[2][1]);
    printf("     *(*(zippo+2) + 1) = %d\n", *(*(zippo+2)+1));
    return 0;
}

/*
 * 经验总结
 *   (1)数组名  ===  数组首元素的地址
 *   (2)*数组名 ===  数组首元素的值
 *   (3)元素是基本元素，则其值为存储内容；若是数组时，则其值为首单元地址
 */