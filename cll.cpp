#include "header.h"


//This program is created to help the donations centers sort of the donations that they recieve, whether it was food, clothing, or housing


//Adding new dropped off food 
void CLL::add_food(const food & my_food){
	if(!f_rear){ //Base case
		f_rear = new f_node(my_food); //Calling the constructor
		f_rear -> set_next(f_rear); //Setting next to point to the rear
	}
	f_node * temp = new f_node(my_food); //Calling the constructor
	temp -> set_next(f_rear -> get_next()); //Setting next to point to the first node
	f_rear -> set_next(temp); //Having rear
  f_rear = temp;
	


}
//Adding new dropped off clothing 
void CLL::add_cloth(const cloth & my_cloth){
	if(!c_rear){
		c_rear = new c_node(my_cloth);//Calling the constructor
		c_rear -> set_next(c_rear);//Setting next to point to the rear
	}
	c_node * temp = new c_node(my_cloth);//Calling the constructor
	temp -> set_next(c_rear -> get_next()); //Setting next to point to the first node
	c_rear -> set_next(temp);
  c_rear = temp;
}
//Adding new offered housing
void CLL::add_housing(const housing & my_housing){
	if(!h_rear){
		h_rear = new h_node(my_housing);//Calling the constructor
		h_rear -> set_next(h_rear);//Setting next to point to the rear
	}
	h_node * temp = new h_node(my_housing);//Calling the constructor
	temp -> set_next(h_rear -> get_next()); //Setting next to point to the first node
	h_rear -> set_next(temp);
  h_rear = temp;
}

//Displaying the list for food
void CLL::display_food_wrap(){
  if(!f_rear)
    return;
	f_node * current = f_rear -> get_next();

	int i = display_food(current);
	return;
}

int CLL::display_food(f_node * current){
	if(current == f_rear)
		return 1;
	current -> display();
	return display_food(current -> get_next());
}

//Displaying the list for clothing
void CLL::display_cloth_wrap(){
  if(!c_rear)
    return;
	c_node * current = c_rear -> get_next();;

	int i = display_cloth(current);
	return;
}
int CLL::display_cloth(c_node * current){
	if(current == c_rear)
		return 1;
	current -> display();
	return display_cloth(current -> get_next());
}

//Displaying the list for housing
void CLL::display_housing_wrap(){
  if(!h_rear)
    return;
	h_node * current = h_rear -> get_next();

	int i = display_housing(current);
	return;
}
int CLL::display_housing(h_node * current){
	if(current == h_rear)
		return 1;
	current -> display();
	return display_housing(current -> get_next());
}

