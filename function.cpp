
#include "header.h"


//This program is created to help the donations centers sort of the donations that they recieve, whether it was food, clothing, or housing

//COnstructors
relief::relief():date(0), total(0){

}

relief::relief(int total1, int date1){
	total = total1;
	date = date1;
}

food::food():type(NULL),exp(NULL),amount(0){

}

//Copy constructor
food::food(const food & source):relief(source.total,source.date){
	type = new char[strlen(source.type)+1];
	strcpy(type,source.type);
	exp = new char[strlen(source.exp)+1];
		strcpy(exp,source.exp);
	amount = source.amount;
}

//setting the object 
food::food(char * type1, char * exp1, int amount1){
	type = new char[strlen(type1)+1];
	strcpy(type,type1);
	exp = new char[strlen(exp1)+1];
		strcpy(exp,exp1);
	amount = amount1;
}

//Destructor
food::~food(){

	type = NULL;

	exp = NULL;
	amount = 0;
}

//constructor
cloth::cloth():type(NULL),size(NULL){

}

//Copy constructor
cloth::cloth(const cloth & source):relief(source.total,source.date){
	type = new char[strlen(source.type)+1];
	strcpy(type,source.type);
	size = new char[strlen(source.size)+1];
	strcpy(size,source.size);

}

//Setting the object
cloth::cloth(char * type1, char * size1){
	type = new char[strlen(type1)+1];
	strcpy(type,type1);
	size = new char[strlen(size1)+1];
	strcpy(size,size1);
}
//destructor
cloth::~cloth(){

	type = NULL;

	size = NULL;

}


//Contructor
housing::housing():type(NULL),capacity(0){

}

//Copy constructor
housing::housing(const housing & source):relief(source.total,source.date){
	type = new char[strlen(source.type)+1];
	strcpy(type,source.type);
	capacity = source.capacity;

}

//Setting the object
housing::housing(char * type1, int capacity1){
	type = new char[strlen(type1)+1];
	strcpy(type,type1);
	capacity = capacity1;
}

//Destructor
housing::~housing(){

	type = NULL;
	capacity = 0;
}

//Constructors
f_node::f_node():next(NULL),data(NULL){

}

c_node::c_node():next(NULL),data(NULL){

}

h_node::h_node():next(NULL),data(NULL){

}

//Copy constructors
f_node::f_node(const food & my_food){
	data = new food(my_food);

}

c_node::c_node(const cloth & my_cloth){
	data = new cloth(my_cloth);


}
h_node::h_node(const housing & my_housing){
	data = new housing(my_housing);

}


//Constructor
CLL::CLL():f_rear(NULL),c_rear(NULL),h_rear(NULL){

}

//Destrucotor
CLL::~CLL(){

  f_rear = NULL;

  c_rear = NULL;

  h_rear = NULL;
}


