#include <iostream>
#include <random>
#include <array>
//if you start to make some random real numbers, this program will show you the approximate frequencies.
int main (){
    std::random_device seed;
    std::default_random_engine myEngin{seed()};
    std::uniform_real_distribution<float> randomMaker{0,1};

    constexpr size_t arraySize{10};
    std::array <int, arraySize> frequencyCounter{};
    int times;
    std::cout<<"How many random numbers do you want to check?"<<"\n";
    std::cin>>times;

    for (int i{1}; i<=times; i++){
        frequencyCounter.at(randomMaker(myEngin)*10)++;
    }
    std::cout<<"the frequencies:"<<"\n";
    for (int i{0}; i<10; i++){
       // std::cout<<"between "<i*0.1<<"and "<<(i+1)*0.1<<" :"<<frequencyCounter.at(i);
        std::cout<<i*0.1<<" :"<<frequencyCounter.at(i)<<"\n";}
    }
    
    

