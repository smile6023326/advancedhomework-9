#include<iostream> 
int main()
{
    int month, day,result; //�w�q
    printf("�п�J�@�Ӥ���G");
    scanf("%d%d",&month,&day);
    result = (month*2+day)%3;
        if(result == 0 ) 
        {
			printf("���骺�B�աG���q");
        }
        if( result == 1 ) 
        {
			printf("���骺�B�աG�N");
        }
        if( result == 2 ) 
        {
			printf("���骺�B�աG�j�N");
        }
    return 0;
}
