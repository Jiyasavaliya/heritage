#include<iostream>
using namespace std;

 class math{
 	
 	
 		public:
 			
 			int a;
 			
 			int set(){ 
 			int a=4;
 			
 			return a;
			 
			 }
 };
 
 class sqare : public math{
 	
 	public:
 		
 		void sum()
 	{
 		int ans=set();
 		cout<<"sqare : "<<ans*ans<<endl;
	 }
 };
 
  class cube : public math{
 	
 	public:
 			
 		void sum()
 	{
 		int ans=set();
 		cout<<"cube : "<<ans*ans*ans<<endl;
	 }
 		
 	
 	
 };
 
 
 int main(){
 
 	
 	sqare obj1;
 	cube obj2;
 	
 	obj1.sum();
 	obj2.sum();
 	
 	return 0;
 	
 }
