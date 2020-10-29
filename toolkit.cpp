#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Tool {
  public:
    virtual void use() = 0;
};

class Drill: public Tool {
  public:
    void use() {
      cout << "drrt" << endl;
    }
};

class Hammer: public Tool {
  public:
    void use() {
      cout << "pam pam" << endl;
    }
};

class Screwdriver: public Tool {
  public:
    void use() {
      cout << "skviks skivks" << endl;
    }
};

int main(int argc, char *argv[]){

    vector<shared_ptr<Tool>> toolkit;

    auto drill = make_shared<Drill>();
    auto hammer = make_shared<Hammer>();
    auto driver = make_shared<Screwdriver>();

    toolkit.push_back(drill);
    toolkit.push_back(hammer);
    toolkit.push_back(driver);

    for(auto &&elem: toolkit){
        elem -> use();
    }

    return 0;
}
