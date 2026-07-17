class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hr=((((endTime[0]-'0')*10)+(endTime[1]-'0'))-(((startTime[0]-'0')*10)+(startTime[1]-'0')))*3600;
        int mn=((((endTime[3]-'0')*10)+(endTime[4]-'0'))-(((startTime[3]-'0')*10)+(startTime[4]-'0')))*60;
        int sec=(((endTime[6]-'0')*10)+(endTime[7]-'0'))-(((startTime[6]-'0')*10)+(startTime[7]-'0'));
        return hr+mn+sec;
    }
};