#include <iostream>
#include <vector>
using namespace std;

int sum (vector<int> values) 
//function takes in vector with type int as parameter.
//function will be using value passing, so original vector = no change.
{
    int total = 0; //keeps track of sum every iteration.
    for (int counter = 0; counter < values.size(); counter++) //counter tracks iterations and indexes the vector.
    {
       total = total + values[counter]; //updates total based on index in vector.
    }
    return total;
}

int main() {
    vector<int> days = {4, 3, 5, 6}; //this vector not changed bc of value passing.
    cout << sum(days); //prints out return value.
    return 0;
}
