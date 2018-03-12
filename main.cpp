#include <iostream>
#include <string>


std::string generateName()
{
    std::string name{"haloppppp"};


    return name;
}



int main()
{

    char a;
    std::cout<<"Hello There!\nGenerate your own fantasy name"<<std::endl;
    std::cout<<"------------------------------"<<std::endl;
    std::cout<<"Press 'q' to QUIT"<<std::endl;
    while(a!='q')
    {

        std::cout<<"To generate press 'g' and ENTER"<<std::endl;
        std::cout<<generateName();
        std::cin>>a;
    }

    return 0;
}
