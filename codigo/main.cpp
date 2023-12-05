#include<iostream>
#include<map>
#include<string>
class Variant{


};
class Environment{
private:
    std::map<std::string,Variant> symbolTable;
    Environment() {}
public:
    void insert(const std::string& name, const Variant& value){
        symbolTable[name] = value;
    }

};


int main(){


    return 0;
}