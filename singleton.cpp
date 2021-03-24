#pragma once
#include <iostream>

class Singleton
{
	private:
	    Singleton() {}
	    static Singleton* inst;
	
	public:
	    static Singleton* getInstance();
	    void showMessage();
};

Singleton* Singleton::inst = nullptr;
Singleton* Singleton::getInstance()
{
    if (inst == nullptr)
        inst = new Singleton();
 
    return inst;
}
 
void Singleton::showMessage()
{
    std::cout << "I am Singleton" << std::endl;
}

int main(void)
{
    Singleton::getInstance()->showMessage();
    Singleton::getInstance()->showMessage();
    Singleton::getInstance()->showMessage();
    
    return 0;
}