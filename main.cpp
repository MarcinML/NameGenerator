#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>





std::string generateName(int ile)
{
    std::string name{};
    char temp;
    char tempForUppercase;

    //Uppercase
    int wylosowana_liczba =( std::rand() % 26 ) + 65;
    name+=wylosowana_liczba;
    tempForUppercase = wylosowana_liczba;

    std::transform(name.begin(), name.end(), name.begin(), ::tolower);



    //Generate small letters
    for(int i=0; i<ile-1; ++i){

    do{
            wylosowana_liczba =( std::rand() % 26 ) + 97;
            temp=wylosowana_liczba;

        }while((temp==name.back()) ||
               temp =='q' ||
               temp == 'y' ||
               temp == 'x' ||
               (temp == 'n' && name.back() == 'b') ||
               (temp == 'x' && name.back() == 'n') ||
               (temp == 'b' && name.back() == 'l') ||
               (temp == 'g' && name.back() == 'p') ||
               (temp == 'p' && name.back() == 'x') ||
               (temp == 'f' && name.back() == 'p') ||
               (temp == 'p' && name.back() == 'b') ||
               (temp == 'v' && name.back() == 'n') ||
               (temp == 'p' && name.back() == 'b') ||
               (temp == 'b' && name.back() == 'c') ||
               (temp == 'w' && name.back() == 'r') ||
               (temp == 'b' && name.back() == 'g') ||
               (temp == 'c' && name.back() == 'w') ||
               (temp == 'w' && name.back() == 'c') ||
               (temp == 'k' && name.back() == 'p') ||
               (temp == 'p' && name.back() == 'k') ||
               (temp == 'j' && name.back() == 'n') ||
               (temp == 'n' && name.back() == 'j') ||
               (temp == 'k' && name.back() == 'g') ||
               (temp == 'g' && name.back() == 'k') ||
               (temp == 'g' && name.back() == 'v') ||
               (temp == 'v' && name.back() == 'g') ||
               (temp == 'v' && name.back() == 'g') ||
               (temp == 't' && name.back() == 'x') ||
               (temp == 'x' && name.back() == 't') ||
               (temp == 'j' && name.back() == 'c') ||
               (temp == 'c' && name.back() == 'j') ||
               (temp == 'k' && name.back() == 'd') ||
               (temp == 'd' && name.back() == 'k') ||
               (temp == 'd' && name.back() == 't') ||
               (temp == 'c' && name.back() == 'l') ||
               (temp == 'l' && name.back() == 'c') ||
               (temp == 't' && name.back() == 'd') ||
               (temp == 'p' && name.back() == 'd') ||
               (temp == 'd' && name.back() == 'p') ||
               (temp == 'c' && name.back() == 'b'));

    name+=wylosowana_liczba;
    }

name.front() = tempForUppercase;

    return name;
}



int main()
{
    srand( time( NULL ) );

    char a;
    int ile=4;
    std::cout<<"Hello There!\nGenerate your own fantasy name"<<std::endl;
    std::cout<<"------------------------------"<<std::endl;
    std::cout<<"Press 'q' to QUIT"<<std::endl;

    do{
        std::cout<<"Please choose how many letters name should have (between 3-10) :";
    std::cin>>ile;
    std::cout<<std::endl;
    }while(ile<3 || ile>10);


    while(a!='q')
    {

        std::cout<<"To generate press 'g' and ENTER"<<std::endl;
        std::cout<<generateName(ile)<<std::endl;
        std::cin>>a;
    }

    return 0;
}
