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
