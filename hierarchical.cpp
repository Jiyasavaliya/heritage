#include<iostream>

using namespace std;

 class mother{
 	
 	private:
 		
 		char name[20];
 		int age;
 		
 		public:
 			
 			void set_value(char n[]){
			 
			 cout<< n<<"enter name : ";
			 cin>>name;
			 
			 cout<<n<< "enter age : ";
			 cin>>age;
			 
			 }
 };
 
 class zebra : public mother{
 	
 	public:
 		
 		void origin(){
		 
		  cout<<"I am from china"<<endl<<endl;
		  
		 }
 	
 };
 
  class dolphin : public mother{
 	
 	public:
 		
 		void origin(){
		 
		  cout<<"I am from india"<<endl<<endl;
		  
		 }
 	
 };
 
 
 int main(){
 
 	
 	zebra obj1;
 	dolphin obj2;
 	
 	obj1.set_value("zebra");
 	obj1.origin();
 	
 	obj2.set_value("dolphin");
 	obj2.origin();
 	
 	return 0;
 	
 }
