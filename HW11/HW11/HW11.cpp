#include <iostream>

struct Book
{
    char nameBook[256];
    char nameAvtor[50];
    char janra[50];
    unsigned short countPage;
    unsigned short yearPresent;
};
struct VideoGame
{
    char nameGame[80];
    char developer[50];
    char janra[50];
    unsigned short playerOnline;
    unsigned short yearPresent;
};
struct Avto
{
    char marka[50];
    char model[50];
    char tipVengel[50];
    unsigned short countRide;
    unsigned short yearPresent;
};

int main()
{
    Book GameOfThone = {"Game Of Thone","I DONT KHOW","Fentazi",296,2016};
    VideoGame PayDay2 = { "PayDay 2","Overkill","Shooter and CO-OP",5000,2013 };
    Avto Nissan = { "Nissan","z350","Cool vengel",0,2015 };

    std::cout << GameOfThone.nameBook << "\n";
    std::cout << GameOfThone.nameAvtor << "\n";
    std::cout << GameOfThone.janra << "\n";
    std::cout << GameOfThone.countPage << "\n";
    std::cout << GameOfThone.yearPresent << "\n";

    std::cout << PayDay2.nameGame << "\n";
    std::cout << PayDay2.developer << "\n";
    std::cout << PayDay2.janra << "\n";
    std::cout << PayDay2.playerOnline << "\n";
    std::cout << PayDay2.yearPresent << "\n";

    std::cout << Nissan.marka << "\n";
    std::cout << Nissan.model << "\n";
    std::cout << Nissan.tipVengel << "\n";
    std::cout << Nissan.countRide << "\n";
    std::cout << Nissan.yearPresent << "\n";
}
