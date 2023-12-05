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
        auto it = symbolTable.find(name);
        if (it == symbolTable.end()) {
            // El símbolo no existe, insertarlo
            symbolTable[name] = value;
        } else {
            // El símbolo ya existe, manejar el error
            throw std::runtime_error("Symbol already exists: " + name);
        }
    }
    Variant lookup(const std::string& name) const {
        auto it = symbolTable.find(name);
        if (it != symbolTable.end()) {
            return it->second;
        } else {

            throw std::runtime_error("No he encontrado el simbolo: " + name);
        }
    }

};


int main(){
    Environment env;
    //env.insert("x",(Variant) 10);

    return 0;
}