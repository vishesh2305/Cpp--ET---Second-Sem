#include <iostream>
#include <string>
using namespace std;



class WeatherReport{
    string location;
    double tempratureCelsius;
    double humidityPercent;
    public:
    WeatherReport(const string& location,const double& tempcel,const double& humidperce): location(location), tempratureCelsius(tempcel), humidityPercent(humidperce){
        getlocation();
        getTemprature();
        getHumidity();
    };

    void getlocation(){
        cout << location<<endl;
    };
    void getTemprature(){
        cout << tempratureCelsius<<endl;
    };
    void getHumidity(){
        cout << humidityPercent<<endl;
    };
    void updateTemprature(const double& newTemp){
        tempratureCelsius = newTemp;
        cout << "The new temprature is : "<<newTemp<<endl;
    };

};

int main(){
    WeatherReport w1("Rajpura", 21.2, 12.00);
    w1.updateTemprature(12.13);
    return 0;
}