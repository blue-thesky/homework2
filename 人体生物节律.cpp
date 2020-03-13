int total_day(int year,int month,int day)
{
    int sum = 0;
    switch(month)
    {
        case 1:sum = day;
                break;
        case 2:sum = 31 + day;
                break;
        case 3:sum = 59 + day;
                break;
        case 4:sum = 90 + day;
                break;
        case 5:sum = 120 + day;
                break;
        case 6:sum = 151 + day;
                break;
        case 7:sum = 181 + day;
                break;
        case 8:sum = 212 + day;
                break;
        case 9:sum = 243 + day;
                break;
        case 10:sum = 273 + day;
                break;
        case 11:sum = 304 + day;
                break;
        case 12:sum = 334 + day;
                break;
        default :
        printf("输入的月份有错误\n");
        break;
    }
    if(month >2)
    {
        if(((year % 4 == 0)&&(year % 100 !=0))||(year % 400) == 0){
         sum = sum + 1;
        }
    }
    return sum;
}
int total_year_day(int year1,int year2)
{
    int sum_year_day = 0;
    int i = 0;
    sum_year_day = (year2 - year1) * 365;
    for(i=year1 ; i<year2 ; i++)
    {
        if(((i % 4 == 0)&&(i % 100 !=0))||(i % 400) == 0){
         sum_year_day = sum_year_day + 1;
        }
    }
    return sum_year_day;
}
int main()
{
    int year1 = 2013, month1 = 1,day1 = 1;
    int year2 = 2013, month2 = 1,day2 = 1;
    int sum = 0;
    printf("请输入起始的年月日（格式为：XXXX：XX：XX）");
    scanf("%d:%d:%d",&year1,&month1,&day1);
    printf("请输入结束的年月日（格式为：XXXX：XX：XX）");
    scanf("%d:%d:%d",&year2,&month2,&day2);
    sum = total_year_day(year1,year2) - total_day(year1,month1,day1) + total_day(year2,month2,day2);
    printf("它们之间相差的天数为：%d\n",sum);
    return 0;
}
