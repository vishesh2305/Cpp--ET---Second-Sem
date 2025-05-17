#include <iostream>
#include <string>
using namespace std;

class SystemConfig{
    string configVersion;
    int portnumber;
    string loglevel;
    public:
    SystemConfig(const string configVersion, const int portnumber, const string loglevel): configVersion(configVersion), portnumber(portnumber), loglevel(loglevel){};
    string getVersion() const{
        return configVersion;
    };
    int getPort() const{
        return portnumber;
    };
    string getLogLevel() const {
        return loglevel;
    };
    void setLogLevel(string newLevel){
        loglevel = newLevel;
    };
};

void displayConfiguration(const SystemConfig& config){
    cout << "System Configuration:" << endl;
    cout << "Version: " << config.getVersion() << endl;
    cout << "Port: " << config.getPort() << endl;
    cout << "Log Level: " << config.getLogLevel() << endl;

    // config.setLogLevel("Error");

    // As the object passed is const , so we cannot call non const object or function like , setloglevel(),

};

int main(){
    SystemConfig myconfig("v2.123", 4545, "DEBUG");
    displayConfiguration(myconfig);

    myconfig.setLogLevel("Info");

    cout << "Updated configuration: \n";
    displayConfiguration(myconfig);

    return 0;
}