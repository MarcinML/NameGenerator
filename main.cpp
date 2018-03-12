#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


std::string generateName()
{
    std::string name{};
    int wylosowana_liczba =( std::rand() % 26 ) + 65;
    char temp=wylosowana_liczba;
    name+=temp;
    for(int i=0; i<10; ++i){
    wylosowana_liczba =( std::rand() % 26 ) + 97;
    name+=wylosowana_liczba;
    }



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
        std::cout<<generateName()<<std::endl;
        std::cin>>a;
    }

    return 0;
}
