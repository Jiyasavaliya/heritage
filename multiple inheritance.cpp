#include<iostream>
using namespace std;

class school{
	
  private:
  	
	  int id_card;
	  char name[32];
	  
	  public:
	     void schooldata(){
	  	
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
	     void collagedata(){
	  	
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
	     void studentdata(){

		cout<<"student id card  : ";
	  	cin>>id_card;
	  	cout<<"student name : ";
	  	cin>>name;
	  	
	}
};
int main(){
	
        student obj;  
        
	obj.school::schooldata();
	obj.collage::collagedata();
	obj.student::studentdata();
	 
   	
}
