#include<iostream>
using namespace std;
 
int main()
{
    int t, hour, minute, x;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int count = 0;
        cin >> hour;
        cin.get();
        cin >> minute >> x;
        int temp1 = hour, temp2 = minute;
        do
        {
            if (hour <= 5 && minute == hour*10 || (10 <= hour <= 15 ||  20 <= hour <= 23 ) 
            &&  minute == (hour % 10)*10 + ((hour / 10) % 10))
            {
                count++;
                //cout << hour << " " << minute << endl;
            }
            minute += x % 60;
            if (minute >= 60)
            {
                hour++;
                minute -= 60;
            }
            hour += x / 60;
            hour %= 24;
            //cout << hour << " " << minute << endl;
            
        } while (temp1 != hour || temp2 != minute);
        cout << count << endl;
    }
    
}
