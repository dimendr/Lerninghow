#include <string>
#include <vector>
#include <iostream>
using namespace std;

std::vector<std::string> number(const std::vector<std::string> lines) {
    int r = 49;
    for (auto i : lines) {

        i.insert(i.begin(), (char)r);
        i.insert(i.begin() + 1, ':');
        i.insert(i.begin() +2, ' ');
        
        r++;
    }
    return lines;
}

int main() {
   number({ "a", "b", "c" });
   for (auto i : number) {
       cout << i << endl;
   }
}