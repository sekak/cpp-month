#include <iostream>
 
struct Data
{
    int age = 10;
    std::string name = "ahmed";
};

uintptr_t serialize(Data* ptr)
{
    return( reinterpret_cast< std::uintptr_t >(ptr) );
}

Data* deserialize(uintptr_t raw)
{
    return( reinterpret_cast<Data* >(raw) );
}
 
int main()
{
    Data *data = new Data;
    data->age = 10;
    std::cout <<  data->age  << std::endl ;
    std::cout << serialize(data)<< std::endl ;
    std::cout << deserialize(serialize(data))->age<< std::endl ;

}