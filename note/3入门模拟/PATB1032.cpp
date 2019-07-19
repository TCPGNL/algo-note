#include<cstdio>
#define MAXN 10010
int school[MAXN]={0};
int main()
{
    //Init  the 数组
    int n,schId,score;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&schId,&score);
        school[schId]+=score;//进行累加
    }
    //输入完毕
    //开始计算
    int Max=0;
    for (int i = 0; i < n; i++)
    {
        if (shool[i]>school[Max])
        {
            Max=i;
        
        }
        
    }
    printf("%d %d\n",Max,school[Max]);
    





    return 0;
}