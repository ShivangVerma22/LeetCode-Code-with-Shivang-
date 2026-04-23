class Solution {
public:
    bool leapyear(int year)
    {
        return (year % 400==0)|| (year % 4==0 && year % 100!=0);
    }
    string dayOfTheWeek(int day, int month, int year) {
        vector<string>days={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        vector<int>monthdays={31,28,31,30,31,30,31,31,30,31,30,31};
        int totaldays=0;
        for(int y=1971 ; y < year; y++)
        {
            totaldays+=leapyear(y)?366:365;

        }
        for(int m=1;m<month;m++)
        {
            if(m==2 && leapyear(year))
            {
                totaldays+=29;

            }
            else
            {
                totaldays+=monthdays[m-1];
            }



        }
        totaldays+=day;
        return days[(totaldays + 4) % 7];

    }
};