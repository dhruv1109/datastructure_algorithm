//Design Underground System
//https://leetcode.com/problems/design-underground-system/

#include<bits/stdc++.h>
using namespace std;

class UndergroundSystem {
public:
        
    unordered_map<int, pair<string, int>> checkin; // stores id,<station,time>
    unordered_map<string, pair<int, int>> avgTime; // stores journey,<count,time>
    UndergroundSystem() {
    }
    
    void checkIn(int id, string stationName, int t) {
        checkin[id] = {stationName, -t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto entryData = checkin[id];
        string travelName = entryData.first +"-"+ stationName;
        auto currTravel = avgTime[travelName];
        currTravel.first++;
        currTravel.second += entryData.second + t;
        avgTime[travelName] = currTravel;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string travelName = startStation +"-"+ endStation;
        auto currTravel = avgTime[travelName];
        return (double)currTravel.second /currTravel.first;
    }
};
