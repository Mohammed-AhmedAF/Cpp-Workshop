#include <iostream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

int main() {
    json Doc;
    Doc["name"] = "Roderick";
    Doc["role"] = "Barbarian";
    Doc["guild"]["name"] = "The Bandits";
  
    std::cout << Doc.dump(2);
  }