#include<vector>
#include<unordered_map>
#include<cmath>
#include<memory>
#include<functional>
#include<string>
#include<iostream>

using ValuePtr = std::shared_ptr<Value>;
class Value : public std::enable_shared_from_this<Value>
{
    private:
         inline static size_t currentID = 0;
         float data;
         float grade;
           std::string op; //"+"
           size_t id;
           std::vector<Value> prev;

    private:
        Value(float data, const std::string &op, size_t id) : data(data), op(op),
        id(id) {};
        
    private:
        ValuePtr cteate(float data, const std::string &op = "")
        {
            return std::shared_ptr<Value>(new Value(data, op, currentID++));
        } 
};

int main(){
    Value a;
    Value b;

    auto c = add(a + b);

    auto a = std::shared_ptr<Value>();

}

