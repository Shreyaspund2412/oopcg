#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    
    map<string, int> statePopulation;

    statePopulation["Maharashtra"] = 123144223;
    statePopulation["Uttar Pradesh"] = 199812341;
    statePopulation["Bihar"] = 104099452;
    statePopulation["West Bengal"] = 91276115;
    statePopulation["Madhya Pradesh"] = 72626809;

    string state;
    cout << "Enter the name of a state: ";
    getline(cin, state);

    auto it = statePopulation.find(state);
    if (it != statePopulation.end()) {
        cout << "The population of " << state << " is " << it->second << "." << endl;
    } else {
        cout << "State not found in the map." << endl;
    }

    return 0;
}
