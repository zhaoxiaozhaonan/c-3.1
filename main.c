#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{

    printf("欢迎进专车管理系统\n");
    int index = 0;
    struct point arr[100];

    while (1)
    {
        printf("1--添加车辆位置\n");
        printf("2--删除最后一个车辆位置\n");
        printf("3--显示所有车辆位置\n");
        printf("4--返回离我最近的车辆\n");
        printf("5--退出\n");
        printf("请选择所需功能\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入车辆位置\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("添加成功，点击回车继续\n");
            char a;
            scanf("%c", a);
            scanf("%c", a);
        }
        if (code == 2)
        {
            /* code */
        }
        if (code == 3)
        {
            /* code */
        }
        if (code == 4)
        {
            /* code */
        }
        if (code == 5)
        {
            printf("点击回车，退出系统\n");
            break;
        }
    }

    return 0;
}