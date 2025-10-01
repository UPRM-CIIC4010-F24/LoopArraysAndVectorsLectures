#include <string>
#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>

using namespace std;

class City {
private:
    const double EARTH_RADIUS = 6371.0; // km

    string name;
    string country;
    double latitude;
    double longitude;
    long long population;
    double areaSize;
    double toRadians(double degree) {
        return degree * M_PI / 180.0;
    }
public:

    // Default constructor
    City()
        : name(""), country(""), latitude(0.0), longitude(0.0), population(0), areaSize(0.0)
    {}

    // Parameterized constructor
    City(const string& n, const string& c, double lat, double lon, int pop, double area)
        : name(n), country(c), latitude(lat), longitude(lon), population(pop), areaSize(area)
    {}
    // Name
    string getName() const { return name; }
    void setName(const string& n) { name = n; }

    // Country
    string getCountry() const { return country; }
    void setCountry(const string& c) { country = c; }

    // Latitude
    double getLatitude() const { return latitude; }
    void setLatitude(double lat) { latitude = lat; }

    // Longitude
    double getLongitude() const { return longitude; }
    void setLongitude(double lon) { longitude = lon; }

    // Population
    long long getPopulation() const { return population; }
    void setPopulation(long long pop) { population = pop; }

    // Area Size
    double getAreaSize() const { return areaSize; }
    void setAreaSize(double area) { areaSize = area; }

    // To String
    string toString() const {
        return name + ", " + country + " (Lat: " + to_string(latitude) +
               ", Lon: " + to_string(longitude) + ", Pop: " + to_string(population) +
               ", Area: " + to_string(areaSize) + " km²)";
    }

    // Measure distance between two cities
    double haversine(City city2) {
        double lat1 = toRadians(getLatitude());
        double lon1 = toRadians(getLongitude());
        double lat2 = toRadians(city2.getLatitude());
        double lon2 = toRadians(city2.getLongitude());

        double dLat = lat2 - lat1;
        double dLon = lon2 - lon1;

        double a = pow(sin(dLat / 2), 2) +
                cos(lat1) * cos(lat2) * pow(sin(dLon / 2), 2);
        double c = 2 * atan2(sqrt(a), sqrt(1 - a));

        return EARTH_RADIUS * c;
    }
    static vector<City> getCities(string filePath) {

        /*
          Path to csv file
          format: city_name,country,latitud,longitud,population,area
          Each row represents the info of a city
        */
        ifstream cityFile(filePath);
        if(!cityFile.is_open()) {
            cerr << "Could not open file!" << endl;
            return vector<City>{};
        }
        string line;
        vector<City> cities;
        // Skip header
        getline(cityFile, line);
        while (getline(cityFile, line)) {
            // Makes line into a stream 
            stringstream ss(line);

            // Will hold every piece of information from the csv
            string segment;

            // The city the line represents
            City city;

            // Will store in segment the string content 
            // until the first ,
            // First segment is name
            getline(ss, segment, ',');
            city.setName(segment);

            // Stores in segment string content until next ,
            // Second segement is country
            getline(ss, segment, ',');
            city.setCountry(segment);

            // latitud
            getline(ss, segment, ',');
            city.setLatitude(stod(segment));

            // logitud
            getline(ss, segment, ',');
            city.setLongitude(stod(segment));

            // population
            getline(ss, segment, ',');
            city.setPopulation(stoll(segment));

            // area
            getline(ss, segment, ',');
            city.setAreaSize(stod(segment));

            cities.push_back(city);
        }
        cityFile.close();
        return cities;
    }

};


int main(){
    vector<City> cities = City::getCities("cities.csv");

    cout << cities[13].toString() << endl;
}