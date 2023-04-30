#include<iostream>
using namespace std;

class school{
	
  private:
  	
	  int id_card;
	  char name[32];
	  
	  public:
	     void data(){
	  	
	  	cout<<"school id card : ";
	  	cin>>id_card;
	  	cout<<"school name : ";
	  	cin>>name;
	  }	
};

class collage{
   
      private:
      	
	  int id_card;
	  char name[88];
	  
	  public:	
	     void data(){
	  	
	  	cout<<"collage id card : ";
	  	cin>>id_card;
	  	cout<<"collage name : ";
	  	cin>>name;
	  	}
};

class student :  public school, public collage{


   private :
   	
   	int id_card;
   	char name[44];
   	
   	public:
	     void data(){

		cout<<"student id card  : ";
	  	cin>>id_card;
	  	cout<<"student name : ";
	  	cin>>name;
	  	
	}
};
int main(){
	
        student obj;  
        
	obj.school::data();
	obj.collage::data();
	obj.student::data();
	 
   	
}
