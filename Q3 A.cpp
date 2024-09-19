/*Q.No 3
Create a class named Fruit with a data member to calculate the number of fruits in a basket. Create two
other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket.(Inheritance)*/
#include <iostream>
using namespace std;
class Fruit //base
 {
protected://member
    int totalFruits;
public:
   
    Fruit() : totalFruits(0) {}//constructor fruit
    int getTotalFruits() {
        return totalFruits;
    }
    virtual void calculateTotalFruits() = 0;
};

class Apples : public Fruit {//derived class
private:
    int applesCount;

public:
    
    Apples(int apples) : applesCount(apples) {}//constructor to initialize
    void calculateTotalFruits() override {
        totalFruits += applesCount;
    }

    int getApplesCount() {
        return applesCount;
    }
};

class Mangoes : public Fruit {//derived class
private:
    int mangoesCount;
public:
  
    Mangoes(int mangoes) : mangoesCount(mangoes) {}//constructor to ini mangoes

    
    void calculateTotalFruits() override {//calculate tot man
        totalFruits += mangoesCount;
    }
    int getMangoesCount() {
        return mangoesCount;
    }
};

int main() {
    int apples, mangoes;//input

 
    cout << "Enter the number of apples in the basket: ";
    cin >> apples;
    cout << "Enter the number of mangoes in the basket: ";
    cin >> mangoes;
    
    Apples appleBasket(apples);
    Mangoes mangoBasket(mangoes);

    appleBasket.calculateTotalFruits();//object create apple and mangoes
    mangoBasket.calculateTotalFruits();
    cout << "\nNumber of apples: " << appleBasket.getApplesCount();//calculate no. apple
    cout << "\nNumber of mangoes: " << mangoBasket.getMangoesCount();//mangoes
    cout << "\nTotal number of fruits in the basket: " // tot
         << appleBasket.getTotalFruits() + mangoBasket.getTotalFruits() << endl;//print 

    return 0;
}
