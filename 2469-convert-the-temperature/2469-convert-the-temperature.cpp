class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kel=double(celsius+273.15);
        double fa=double((celsius*1.80)+32.00);
        return {kel,fa};
    }
};