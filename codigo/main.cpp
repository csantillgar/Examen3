#include<iostream>
#include<map>
#include<string>
class Variant{


};
class Environment{
private:
    std::map<std::string,Variant> symbolTable;

public:
    Environment() {}
    void insert(const std::string& name, const Variant& value){
        symbolTable[name] = value;
    }

};


int main(){
    Environment env;
    env.insert("x",(Variant) 10);

    return 0;
}