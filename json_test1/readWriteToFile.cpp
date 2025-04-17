#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;

int main()
{

  std::string apiResponse = R"({
    "users": [
        {"name": "Alice", "age": 28},
        {"name": "Bob", "age": 34}
    ]
})";

  json response = json::parse(apiResponse);
  for (const auto &user : response["users"])
  {
    std::cout << "Name: " << user["name"] << ", Age: " << user["age"] << std::endl;
  }

  // Saving data to file
  std::fstream file_handle;
  file_handle.open("../opt/data.json", std::ios::out);
  file_handle << apiResponse;
  file_handle.close();

  // Reading from file
  std::fstream file_handle_read;
  file_handle_read.open("../opt/data.json",std::ios::in);
  json json_data {json::parse(file_handle_read)};
  std::cout<< json_data.dump() << std::endl;


  return 0;
}