#include<iostream> 
int main()
{
    int month, day,result; //定義
    printf("請輸入一個日期：");
    scanf("%d%d",&month,&day);
    result = (month*2+day)%3;
        if(result == 0 ) 
        {
			printf("今日的運勢：普通");
        }
        if( result == 1 ) 
        {
			printf("今日的運勢：吉");
        }
        if( result == 2 ) 
        {
			printf("今日的運勢：大吉");
        }
    return 0;
}
