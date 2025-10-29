
#include <iostream>
#include <string>
using namespace std;

class Animals {
    public:
    string species;
    string name;
    string gender;
    string color;
    string arrivedFrom;
    int weight;
    int age;

    void display() {
        cout << "Species: " << species << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Color: " << color << endl;
        cout << "ArrivedFrom: " << arrivedFrom << endl;
        cout << "Weight(lbs): " << weight << endl;
        cout << "Age: " << age << endl;
    }

};

int main() {

    cout << "Hello and welcome to my zoo keeper challenge!\n";

Animals Hy01;
    Hy01.species = "Hyena";
    Hy01.name = "Shenzi";
    Hy01.gender = "Female";
    Hy01.color = "Tan";
    Hy01.arrivedFrom = "Friguia Park, Tunisia";
    Hy01.weight = 70;
    Hy01.age = 4;
    Hy01.display();

    Animals Hy02;
    Hy02.species = "Hyena";
    Hy02.name = "Banzai";
    Hy02.gender = "Male";
    Hy02.color = "Brown";
    Hy02.arrivedFrom = "Friguia Park, Tunisia";
    Hy02.weight = 120;
    Hy02.age = 12;
    Hy02.display();

    Animals Hy03;
    Hy03.species = "Hyena";
    Hy03.name = "Ed";
    Hy03.gender = "Male";
    Hy03.color = "Black";
    Hy03.arrivedFrom = "Friguia Park, Tunisia";
    Hy03.weight = 120;
    Hy03.age = 4;
    Hy03.display();

    Animals Hy04;
    Hy04.species = "Hyena";
    Hy04.name = "Kamari";
    Hy04.gender = "Female";
    Hy04.color = "Black/Tan stripes";
    Hy04.arrivedFrom = "Friguia Park, Tunisia";
    Hy04.weight = 105;
    Hy04.age = 8;
    Hy04.display();

    Animals Li01;
    Li01.species = "Lion";
    Li01.name = "Kiara";
    Li01.gender = "Female";
    Li01.color = "Tan";
    Li01.arrivedFrom = "Zanzibar, Tanzania";
    Li01.weight = 300;
    Li01.age = 6;
    Li01.display();

    Animals Li02;
    Li02.species = "Lion";
    Li02.name = "Nala";
    Li02.gender = "Female";
    Li02.color = "Dark Tan";
    Li02.arrivedFrom = "KopeLion, Tanzania";
    Li02.weight = 375;
    Li02.age = 12;
    Li02.display();

    Animals Li03;
    Li03.species = "Lion";
    Li03.name = "Mufasa";
    Li03.gender = "Male";
    Li03.color = "Golden";
    Li03.arrivedFrom = "Zanzibar, Tanzania";
    Li03.weight = 450;
    Li03.age = 22;
    Li03.display();

    Animals Li04;
    Li04.species = "Lion";
    Li04.name = "Sarabi";
    Li04.gender = "Female";
    Li04.color = "Tan/Brown";
    Li04.arrivedFrom = "KopeLion, Tanzania";
    Li04.weight = 275;
    Li04.age = 4;
    Li04.display();

    Animals Ti01;
    Ti01.species = "Tiger";
    Ti01.name = "Tony";
    Ti01.gender = "Male";
    Ti01.color = "Gold/Tan Stripes";
    Ti01.arrivedFrom = "Dhaka, Bangladesh";
    Ti01.weight = 270;
    Ti01.age = 2;
    Ti01.display();

    Animals Ti02;
    Ti02.species = "Tiger";
    Ti02.name = "Cuddles";
    Ti02.gender = "Female";
    Ti02.color = "Black Stripes";
    Ti02.arrivedFrom = "Dhaka, Bangladesh";
    Ti02.weight = 400;
    Ti02.age = 4;
    Ti02.display();

    Animals Ti03;
    Ti03.species = "Tiger";
    Ti03.name = "Rajah";
    Ti03.gender = "Male";
    Ti03.color = "Gold/Tan";
    Ti03.arrivedFrom = "Bardia, Nepal";
    Ti03.weight = 300;
    Ti03.age = 18;
    Ti03.display();

    Animals Ti04;
    Ti04.species = "Tiger";
    Ti04.name = "Amber";
    Ti04.gender = "Female";
    Ti04.color = "Black stripes";
    Ti04.arrivedFrom = "Bardia, Nepal";
    Ti04.weight = 285;
    Ti04.age = 3;
    Ti04.display();

    Animals Br01;
    Br01.species = "Bear";
    Br01.name = "Yogi";
    Br01.gender = "Male";
    Br01.color = "Brown";
    Br01.arrivedFrom = "Alaska Zoo, Alaska";
    Br01.weight = 320;
    Br01.age = 7;
    Br01.display();

    Animals Br02;
    Br02.species = "Bear";
    Br02.name = "Lippy";
    Br02.gender = "Female";
    Br02.color = "Black";
    Br02.arrivedFrom = "Woodland Park Zoo, Washington";
    Br02.weight = 425;
    Br02.age = 25;
    Br02.display();

    Animals Br03;
    Br03.species = "Bear";
    Br03.name = "Snuggles";
    Br03.gender = "Female";
    Br03.color = "Black";
    Br03.arrivedFrom = "Woodland Park Zoo, Washington";
    Br03.weight = 355;
    Br03.age = 4;
    Br03.display();

    Animals Br04;
    Br04.species = "Bear";
    Br04.name = "Winnie The Pooh";
    Br04.gender = "Male";
    Br04.color = "Brown";
    Br04.arrivedFrom = "Alaska Zoo, Alaska";
    Br04.weight = 405;
    Br04.age = 4;
    Br04.display();

    return 0;
}