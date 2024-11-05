#include <iostream>
#include <fstream>
#include <string>
#include "Business.pb.h"
using namespace std;

struct Works
{
    int date;
    string adress;
    string name;
    string line;
    bool activity;
};

int main()
{
    Works works;
    cin >> works.date >> works.adress >> works.name >> works.line >> works.activity;
    stock_flotation = works.date;
    legal_adress = works.adress;
    company_name = works.line;
    line_activity = works.line;
    foreign_economic_activity = works.activity;
}