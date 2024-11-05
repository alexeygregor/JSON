#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"
using namespace std;

struct Cinema
{
    string title;
    string actor;
};

void add()
{
    ofstream file("cinema.json");
    nlohmann::json dict;
    dict = "{ \"title_1\": \"The Wild Robot\","
           "  \"actors_1\": {"
           "  \"Lupita Nyong'o\": \"ROZZUM unit 7134 (Roz), an abandoned robot that was washed onto a forest island and learns to adapt to the new environment\","
           "  \"Pedro Pascal\": \"Fink, a mischievous red fox who is the first animal that Roz helps and befriends\","
           "  \"Kit Connor\": \"Brightbill, an orphaned runt Canada goose who is raised by Roz as her own son after losing his biological family\","
           "  \"Boone Storme\": \"Baby Brightbill\","
           "  \"Catherine O'Hara\": \"Pinktail, a maternal Virginia opossum who gives Roz some advice on raising Brightbill\","
           "  \"Bill Nighy\": \"Longneck, an elderly Canada goose who helps Roz understand teaching Brightbill how to fly\","
           "  \"Stephanie Hsu\": \"Vontra, a cruel, tentacled robot sent by Universal Dynamics to retrieve Roz\","
           "  \"Mark Hamill\": \"Thorn, a grizzly bear and the island's most feared predator\","
           "  \"Matt Berry\": \"Paddler, a neurotic beaver who spends his days trying to gnaw down a giant tree\","
           "  \"Ving Rhames\": \"Thunderbolt, a peregrine falcon who helps Brightbill learn to fly\" },"
           "  \"title_2\": \"Mummies\","
           "  \"actors_2\": {"
           "  \"Joe Thomas\": \"Thut, an ex-chariot racer left with post-traumatic stress disorder after a crash\","
           "  \"Eleanor Tomlinson\": \"Nefer, an irrepressible princess who loves singing\","
           "  \"Karina Pasian\": \"Nefer's singing voice\","
           "  \"Celia Imrie\": \"Mother June Carnaby\","
           "  \"Hugh Bonneville\": \"Lord Sylvester Carnaby\","
           "  \"Sean Bean\": \"Pharaoh\","
           "  \"Maria Moscardo\": \"Usi\","
           "  \"Shakka\": \"Ed A. Murphy\","
           "  \"Santiago Winder\": \"Ed A. Murphy\","
           "  \"Dan Starkey\": \"Danny and Dennys, Lord Carnaby's bickering henchmen\","
           "  \"Oliver Lidert\": \"Radames, Aida male lead\","
           "  \"Rachel Adedeji\": \"Aida female lead\" }, "
           "  \"title_3\": \"The Jungle Bunch 2: World Tour\","
           "  \"actors_3\": {"
           "  \"Gauthier Battou\": \"Serguei\","
           "  \"Paul Borne\": \"Bob\","
           "  \"Philippe Bozo\": \"Maurice\","
           "  \"Pascal Casanova\": \"Miguel\","
           "  \"Frederic Cerdal\": \"Albert\","
           "  \"Jeremie Covillault\": \"Henry\","
           "  \"Emmanuel Curtil\": \"Al\","
           "  \"Xavier Fagnon\": \"Youri\","
           "  \"Dawn Ford\": \"Batricia\","
           "  \"Celine Montsarrat\": \"Batricia\","
           "  \"Laurent Morteau\": \"Gilbert\","
           "  \"Leopoldine Serre\": \"Camelia\" },"
           "  \"title_4\": \"The Garfield Movie\","
           "  \"actors_4\": {"
           "  \"Chris Pratt\": \"Garfield, an overweight, sarcastic and lazy orange tabby cat\","
           "  \"Samuel L. Jackson\": \"Vic, Garfield's estranged biological father\","
           "  \"Hannah Waddingham\": \"Jinx, a ruthless white Persian cat and one of Vic's former crewmembers\","
           "  \"Ving Rhames\": \"Otto, a purple Highland bull and the former mascot of Lactose Farms\","
           "  \"Nicholas Hoult\": \"Jon Arbuckle, Garfield and Odie's owner\","
           "  \"Cecily Strong\": \"Marge Malone, the dedicated Animal Control officer of Lactose Farms\","
           "  \"Harvey Guillen\": \"Odie, a yellow beagle and Garfield's best friend\","
           "  \"Brett Goldstein\": \"Roland, a large Shar Pei and one of Jinx's henchmen\","
           "  \"Bowen Yang\": \"Nolan, a small whippet and one of Jinx's henchmen\","
           "  \"Snoop Dogg\": \"Maurice, a blue Maine Coon with an eyepatch and another of Vic's former crewmembers\","
           "  \"Janelle James\": \"Olivia, a green cat and another of Vic's former crewmembers\","
           "  \"Angus Cloud\": \"Snickers, a small purple cat and another of Vic's former crewmembers\","
           "  \"Jeff Foxworthy\": \"a bird that was zapped on a Lactose Farms fence\","
           "  \"Eugenia Caruso\": \"Maria\","
           "  \"Dev Joshi\": \"a veterinarian and Jon's love interest\","
           "  \"Cameron Bernard Jones\": \"Barry, an eastern bluebird and one of Jinx's henchmen\","
           "  \"Alicia Grace Turrell\": \"Ethel, a cow at Lactose Farms and Otto's love interest\","
           "  \"Eric Loren\": \"Roadkill, a Virginia Opossum\" },"
           "  \"title_5\": \"Saving Bikini Bottom: The Sandy Cheeks Movie\","
           "  \"actors_5\": {"
           "  \"Carolyn Lawrence\": \"Sandy Cheeks and others\","
           "  \"Tom Kenny\": \"SpongeBob SquarePants, Gary the Snail and others\","
           "  \"Mr. Lawrence\": \"Plankton, Larry the Lobster and others\","
           "  \"Mary Jo Catlett\": \"Mrs. Puff\","
           "  \"Clancy Brown\": \"Mr. Krabs and others\","
           "  \"Bill Fagerbakke\": \"Patrick Star and others\","
           "  \"Rodger Bumpass\": \"Squidward Tentacles and others\","
           "  \"Dee Bradley Baker\": \"Video Voice and others\","
           "  \"Ilia Isorelys Paulino\": \"Phoebe\","
           "  \"Matty Cardarople\": \"Kyle\","
           "  \"Wanda Sykes\": \"Sue Nahmee\","
           "  \"Jamaria Davis\": \"young Sue Nahmee\","
           "  \"Jill Talley\": \"Karen and various\","
           "  \"Craig Robinson\": \"Pa Cheeks\","
           "  \"Grey DeLisle\": \"Ma Cheeks, Granny Cheeks, Rowdy Cheeks, and Rosie Cheeks\","
           "  \"Johnny Knoxville\": \"Randy Cheeks\","
           "  \"Kari Wahlgren\": \"SeaPals Kid\","
           "  \"Miles Hall\": \"Boy\","
           "  \"Jersey Johnston\": \"Girl\" } }"_json;
    file << dict;
}

void search(string name)
{
    Cinema cinema;
    nlohmann::json dict;
    ifstream file("cinema.json");
    file >> dict;
    for(int i = 1; i <= 5; ++i)
    {
        if(dict["actors_" + to_string(i)][name] != nullptr)
        {
            cinema.title = dict["title_" + to_string(i)];
            cinema.actor = dict["actors_" + to_string(i)][name];
            cout << "<" << cinema.title << ">" << "\n*" << name << " as " << cinema.actor << endl;
        }
    }
}

int main()
{
    add();
    string name;
    cout << "Enter actor name:" << endl;
    while(name != "end")
    {
        getline(cin, name);
        search(name);
    }
}
