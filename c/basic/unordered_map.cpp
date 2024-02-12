#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  // init
  unordered_map<string, int> hash;
  unordered_map<std::string, int> hash2 = {{"Tom", 1}, {"Ann", 4}, {"Jack", 2}};

  hash.insert(pair<string, int>("John", 3));

  pair<unordered_map<string, int>::iterator, bool> retPair;
  retPair = hash.insert(pair<string, int>("John", 3));

  cout << "id: " << hash["John"] << "\n";

  // check empty
  hash.empty();

  // remove element
  hash.erase(hash.begin());

  // clear
  hash.clear();

  for (auto it = hash.begin(); it != hash.end(); it++) {
    cout << "name: " << (*it).first << ", id: " << (*it).second << "\n";
  }

  return 0;
}