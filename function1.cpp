#include "header.h"


//This program is created to help the donations centers sort of the donations that they recieve, whether it was food, clothing, or housing



void relief::input_date(){
}

void food::display_food(){
	cout<<"Food: "<<type<<'\n'<<"Expiry date: "<<exp<<'\n'<<"Amount: "<<amount<<'\n'<<'\n';
	return;
}

void cloth::display_cloth(){
	cout<<"Clothing: "<<type<<'\n'<<"Size: "<<size<<'\n'<<'\n';
	return;
}

void housing::display_housing(){
	cout<<"Housing: "<<type<<'\n'<<'\n'<<"Capacity: "<<capacity<<'\n'<<'\n';
}

f_node * f_node::get_next(){
  return next;
}

void f_node::set_next(f_node * new_next){
  next = new_next;
}

c_node * c_node::get_next(){
  return next;
}

void c_node::set_next(c_node * new_next){
  next = new_next;
}

h_node * h_node::get_next(){
  return next;
}

void h_node::set_next(h_node * new_next){
  next = new_next;
}

void f_node::display(){
  data -> display_food();
}

void c_node::display(){
  data -> display_cloth();
}

void h_node::display(){
  data -> display_housing();
}

