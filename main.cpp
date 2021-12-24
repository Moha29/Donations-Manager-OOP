#include "header.h"


//This program is created to help the donations centers sort of the donations that they recieve, whether it was food, clothing, or housing


int main(){
	food my_food; //To store the class private data
	cloth my_cloth; 
	housing my_housing;
	CLL f_CLL;  //Creating different data structures for each one of the relief efforts
	CLL c_CLL;
	CLL h_CLL;
	char type_food[20]; //Creating these arrays to copy them to there class's objects
	char exp_food[20];
	int amount_food;
	char type_cloth[20];
	char size_cloth[20];
	char type_housing[20];
	int capacity;

	int choice; //user answer from the menu;
  cout<<"Welcome to the relief effort program!"<<'\n';

	while(choice < 8){
    
  	cout<<"               <MENU>"<<'\n'<<"What do you want to do?"<<'\n'<<"(1) Add new food to the list."<<'\n'<<"(2) Add new clothing to the list"<<'\n'<<"(3) Add new housing to the list"<<'\n'<<"(4) Browse through the food list."<<'\n'<<"(5) Browse through the clothing list."<<'\n'<<"(6) Browse through the housing list."<<'\n'<<"(7) History."<<'\n'<<"(8) Quit"<<'\n';
  	cout<<"Please enter the number of you option: ";
  	cin>>choice;
	  cin.ignore(100,'\n');
		if(choice == 1){//If the user wanted to add a new food

			//Asking the user for the dropped food information
			cout<<'\n'<<"Please enter the type of food that has been dropped: ";
			cin.get(type_food,20,'\n');
			cin.ignore(100,'\n');

			cout<<'\n'<<"Please enter the expiry date (If none enter 'NONE': ";
			cin.get(exp_food,20,'\n');
			cin.ignore(100,'\n');

			cout<<'\n'<<"Please enter the amount: ";
			cin>> amount_food;
			cin.ignore(100,'\n');
			//Saving the information into a new class object
			food  my_food(type_food,exp_food,amount_food);

			f_CLL.add_food(my_food);
		}

		if(choice == 2){//If the user wanted to add a new clothing

			//Asking the user for the dropped clothing information
			cout<<'\n'<<"Please enter the type of clothing that has been dropped: ";
			cin.get(type_cloth,20,'\n');
			cin.ignore(100,'\n');

			cout<<'\n'<<"Please enter the size of the drpped clothing: ";
			cin.get(size_cloth,20,'\n');
			cin.ignore(100,'\n');

			//Saving the information into a new class object
			cloth  my_cloth(type_cloth,size_cloth);

			c_CLL.add_cloth(my_cloth);
		}

		if(choice == 3){//If the user wanted to add new housing

			//Asking the user for the offered housing information
			cout<<'\n'<<"Please enter the type of housing: ";
			cin.get(type_housing,20,'\n');
			cin.ignore(100,'\n');

			cout<<'\n'<<"Please enter the capacity of the housing: ";
			cin>> capacity;
			cin.ignore(100,'\n');
			//Saving the information into a new class object
			housing  my_housing(type_housing,capacity);

			h_CLL.add_housing(my_housing);

		}

		if(choice == 4){//If the user wanted to display the food list
			f_CLL.display_food_wrap();

		}

		if(choice == 5){//If the user wanted to display the clothing list
			c_CLL.display_cloth_wrap();

		}

		if(choice == 6){//If the user wanted to display the housing list
			h_CLL.display_housing_wrap();

		}

		if(choice == 7){//If the user wanted to display thr history
      cout<<'\n'<<"Didn't know how to do it :)"<<'\n';

		}

	}

}
