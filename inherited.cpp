#include<iostream>
using namespace std;
class mother{
 
 public:
  void display(){
  	
  	cout<<"your daughter name is tabassun"<<endl;
  }	
	
	
};
class daughter : public mother{
	public:
	 void display(){
  	
  	cout<<"your mother name is fatima";
  }	
	
};

int main(){
	
	 daughter d;
	 mother m;
	 
	m.display();
	d.display();
	
}
