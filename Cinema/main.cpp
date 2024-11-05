#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"
using namespace std;

int main()
{
    ofstream file("cinema.json");
    nlohmann::json dict = "{ \"title\": \"The Incredible story of the Giant Pear\","
                            "\"country\": \"Denmark\","
                            "\"studio\": \"Film, Einstein Film, Nordisk Film Production\","
                            "\"produser\": \"Amalie Nesby Fick, Jorgen Lerdam, Philip Einstein Lipski\","
                            "\"actors\": \"Alfred Bjerre Larsen, Liva Elvira Magnussen, Peter Frodin, Henrik Koefoed\" }"_json;
    file << dict;
}