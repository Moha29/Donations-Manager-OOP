#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

//Mohamed Al-zadjali
//This program is created to help the donations centers sort of the donations that they recieve, whether it was food, clothing, or housing

//Base class to hold the derived ones
class relief{
	public:
		relief();
		relief(int total, int date);
		void input_date();
	protected:
		int total;
		int date;

};

//One of the relief efforts. Derived from the relief class
class food: public relief{
	public:
		food(); //Constructor
		food(const food & source); //Copy constructor
		food(char *, char *, int); //Set a new object
		~food(); //Destructor
		void display_food(); //Display functions
	private: //info needed for the dropped food
		char * type;
		char * exp;
		int amount;

};

//One of the relief efforts. Derived from relief class
class cloth: public relief{ 
	public:
		cloth(); //Constructor
		cloth(const cloth & source); //Copy constructor
		cloth(char *, char *); //Set the new object data
		~cloth();// Destructor
		void display_cloth(); //Display
	private: //info needed for clothing
		char * type;
		char * size;

};

//One of the relief efforts. Derived from the relief class
class housing: public relief{
	public:
		housing(); //Constructor
		housing(const housing & source); //Copy constructor
		housing(char *, int); //Set this class obkect data
		~housing();//destructor
		void display_housing(); //Display
	private: //Ijfo for the offered housing
		char * type;
		int capacity;

};
//this node is for the food class. "has a" relationship with the food class 
class f_node{
	public:
    f_node(); //def Constructor
    f_node (const food & my_food); //copy Constructor
		f_node * get_next(); //next getter
		void set_next(f_node *); //next setter
    void display();//display
    ~f_node(); //destructor

	protected:
		f_node * next; //next pointer
		food * data; //data pointer to the food class
};

//this node is for the cloth class. "has a" relationship with the cloth class 
class c_node{
	public:
    c_node();//def Constructor
		c_node (const cloth & my_cloth); //copy Constructor
		c_node * get_next();//next getter
		void set_next(c_node *);		//next setter
    void display();//display
    ~c_node();//Destructor
	protected:
		c_node * next; //next pointer
		cloth * data;//data pointer to the cloth class
};

//this node is for the housing class. "has a" relationship with the housing class 
class h_node{
	public:
    h_node();//def Constructor
		h_node (const housing & my_housing); //copy Constructor
		h_node * get_next(); //next getter
		void set_next(h_node *); //next setter
    void display();//Dipslay
    ~h_node();//Destructor
	protected:
		h_node * next; //Next pointer
		housing * data; //Pointer to the housing class
};


//Class that manages the list
class CLL{
	public:
		CLL();//Constructor
		~CLL(); //DEstructor
		void add_housing(const housing & my_house); //Addiing a house to the list
		void add_cloth(const cloth & my_cloth); // adding cloth to the list
		void add_food(const food & my_food); //adding housing option
		int display_food(f_node * ); //Display functions
		int display_cloth(c_node *);
		int display_housing(h_node *);
		void display_food_wrap();
		void display_cloth_wrap();
		void display_housing_wrap();

	protected:
		f_node * f_rear; //For the food node
		c_node * c_rear; //FOr the cloth node
		h_node * h_rear; //for the housing node
};
