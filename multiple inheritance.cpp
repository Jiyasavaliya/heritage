#include<iostream>
using namespace std;

class school{
  private:
	  
	  int roll_no;
	  char name[32];
	  
	  public:	  
	  void data(){
	  	
	  	cout<<"school roll no : ";
	  	cin>>roll_no;
	  	cout<<"school name : ";
	  	cin>>name;
	  }	};

class collage{
   
      private:
	  int id_card;
	  char code[88];
	  
	  public:
	  void data(){
	  	
	  	cout<<"collage id card : ";
	  	cin>>id_card;
	  	cout<<"collage code : ";
	  	cin>>code;
	  	}	};

class student :  public school, public collage{


   private :
   	
   	int student_id;
   	int student_code;
   	
   	public: 
   		
		void data(){

		cout<<"student id  : ";
	  	cin>>student_id;
	  	cout<<"student code : ";
	  	cin>>student_code;
	  	
	}
};
int main(){
	
   student obj;  
    obj.school::data();
	obj.collage::data();
	obj.student::data();
	 
   	
}
