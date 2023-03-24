//OOP CONCEPTS
#include<iostream>
using namespace std;
//creating a class
class Hero{
    //properties
    private:
    //To access and modify Private member of a class GETTER AND SETTER are used
    int health;
    public:
    char level;


    Hero(int health){
    //this->health points to health in object eg. if JIN is current object 
    cout<<"this->"<<this<<endl;
       this->health=health;
        cout<<"Constructor called"<<endl;
    }
    void print(){
        cout<<level;
    }
    //creating getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    //creating setter
    void setHealth(int h){
        health=h;
    }

    void setLevel(int l){
        level=l;
    }
};
int main(){
    //object created statically
    Hero Jin(10);
    cout<<"address of JIN:"<<&Jin<<endl;
    Jin.getHealth();

    //object created dynamically
    Hero *Ogre=new Hero();
    //static allocation(using Stack)
    // Hero eddy;
    // eddy.setHealth(80);
    // eddy.setLevel('A');
    // cout<<"Health of eddy is:"<<eddy.getHealth()<<endl;
    // cout<<"Level of eddy is:"<<eddy.level<<endl;
    
    //dynamic allocation( using Heap)
    // Hero *b=new Hero;
    // b->setHealth(84);
    // b->setLevel('B');
    // cout<<"Health of b is:"<<b->getHealth()<<endl;
    // cout<<"Level of b is:"<<(*b).getLevel()<<endl;


    //creating an object
    // Hero king;
    // //cout<<"size-->"<<sizeof(king)<<endl;
    // //if dont initialise our object values it will return garbage value
    // king.setHealth(70);
    // king.level='A';
    // cout<<"Health of king is:"<<king.getHealth()<<endl;
    // cout<<"Level of king is:"<<king.level<<endl;
}
