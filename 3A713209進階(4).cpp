#include <stdio.h> 
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int y,m,d,days,February;
    
    printf("輸入年份:");
    scanf("%d",&y);
    
    printf("輸入月份:");
    scanf("%d",&m);
     
    printf("輸入日期:");
    scanf("%d",&d);
    
    if((y%4)==0&&(y%100)!=0||(y%400)==0&&(y%3200)!=0){ 
    
        February=29;} 
    
    else{ 
        February=28;} 
 
 
        switch (m) {
            case 1:
                days=0;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 2:
                days=31; 
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 3:
                days=31+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 4:
                days=62+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 5:
                days=92+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 6:
                days=123+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 7:
                days=153+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 8:
                days=184+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 9:
                days=215+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 10:
                days=245+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 11:
                days=276+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 12:
                days=306+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
         	
            default:
                printf("你輸入月份錯誤!"); 
                break;
        		}
      			system("PAUSE");
    			return 0;
    		}
