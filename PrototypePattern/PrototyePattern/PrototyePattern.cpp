// PrototyePattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Drinkables
{
protected:
    int waterAmount;

public:
    Drinkables() 
    {
        waterAmount = 0;
    }
    Drinkables(const Drinkables& copyValue)
    {
        std::cout << "Copy Drinkables Constructor" << std::endl;
        waterAmount = copyValue.waterAmount;
    }
    virtual ~Drinkables() {}
    virtual Drinkables* Clone() = 0;
    virtual void Drink() = 0;
};

class IceAmericano : public Drinkables
{
private:
    int iceAmount;
    int sugarAmount;

public:
    IceAmericano() : Drinkables() 
    {
        iceAmount = 0;
        sugarAmount = 0;
    }
    IceAmericano(const IceAmericano& copyValue)
        : Drinkables(copyValue)
    {
        std::cout << "Copy IceAmericano Constructor" << std::endl;
        iceAmount = copyValue.iceAmount;
        sugarAmount = copyValue.sugarAmount;
    }
    virtual ~IceAmericano() {}

    // Inherited via Drinkables
    virtual Drinkables* Clone() override
    {
        return new IceAmericano(*this);
    }

public:
    void InitAmericano(int iceAmountParam, int sugarAmountParam)
    {
        iceAmount = iceAmountParam;
        sugarAmount = sugarAmountParam;
    }

    // Inherited via Drinkables
    virtual void Drink() override
    {
        std::cout << "Drink IceAmericano. \nIce: " << iceAmount << std::endl << "Sugar: " << sugarAmount << std::endl;
    }
};

class Espresso : public Drinkables
{
private:
    int sugarAmount;

public:
    Espresso() : Drinkables() 
    {
        sugarAmount = 0;
    }
    Espresso(const Espresso& copyValue)
        : Drinkables(copyValue)
    {
        std::cout << "Copy Espresso Constructor" << std::endl;
        sugarAmount = copyValue.sugarAmount;
    }
    virtual ~Espresso() {}

    // Inherited via Drinkables
    virtual Drinkables* Clone() override
    {
        return new Espresso(*this);
    }

public:
    void InitEspresso(int sugarAmountParam)
    {
        sugarAmount = sugarAmountParam;
    }

    // Inherited via Drinkables
    virtual void Drink() override
    {
        std::cout << "Drink Espresso. \nSugar: " << sugarAmount << std::endl;
    }
};

int main()
{
    Drinkables* drinks[2];

    auto tempIceAmericano = new IceAmericano();
    tempIceAmericano->InitAmericano(10, 10);
    drinks[0] = tempIceAmericano;
    auto tempIceEspresso = new Espresso();
    tempIceEspresso->InitEspresso(2);
    drinks[1] = tempIceEspresso;

    for (int i = 0; i < 2; i++)
        drinks[i]->Drink();

    Drinkables* copyDrinks[2];

    copyDrinks[0] = drinks[0]->Clone();
    copyDrinks[1] = drinks[1]->Clone();

    for (int i = 0; i < 2; i++)
        copyDrinks[i]->Drink();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
