class Solution {
public:
    double angleClock(int hour, int minutes) {
        int minutes_angle = minutes * 6;
        double hour_angle = (hour%12) * 30 + minutes*0.5;
        double diff = abs(hour_angle - minutes_angle);
        if(diff > 180) return 360 - diff;
        return diff;
    }
};
